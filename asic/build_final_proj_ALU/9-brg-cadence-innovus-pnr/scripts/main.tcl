# ======================================================
# main.tcl - BRG Pnr Step
# ======================================================

# Recover important variables
source ./scripts/always_source.tcl


#-------------------------
# Pre-Placement Reporting
#-------------------------
report_ports
timeDesign -preplace -prefix preplace -outDir ./reports/timing
checkDesign -all -noHtml -outfile init.check_design.rpt
check_timing
report_message -errors

#-------------------------
# Placement
#-------------------------
place_opt_design -out_dir ./reports -prefix place

if {$env(pad_ring)=="False"} {
  assignIoPins -pin *
}

#-------------------------
# Tie HiLo
#-------------------------
addTieHiLo -cell $ADK_TIE_CELLS

#-------------------------
# Clock Tree Synthesis
#-------------------------
timeDesign -preCTS -prefix preCTS -outDir ./reports/timing
catch {get_clocks *} clocks
if {$clocks != ""} {
  create_ccopt_clock_tree_spec
  ccopt_design -outDir ./reports -prefix cts
}

#-------------------------
# Post-CTS Hold Time Opt - only perform ECO routing if a hold slack is provided
#-------------------------

if {$env(hold_slack)!="undefined"} {
  if {$env(setup_slack)!="undefined"} {
    setOptMode -fixFanoutLoad true -addInstancePrefix PostCTS_hold -addNetPrefix PostCTS_hold
    setOptMode -holdFixingCells $ADK_BUF_CELL_LIST
    setOptMode -holdTargetSlack $env(hold_slack) -setupTargetSlack $env(setup_slack)
    optDesign -postCTS -hold -outDir ./reports -prefix postCTS_hold
  } else {
    puts "PERFORMING NO HOLD TIME FIXING: Please provide both a setup and hold slack to brg-cadence-innovus-pnr"
  }
}

#-------------------------
# Nano Routing
#-------------------------
# setAnalysisMode -analysisType onChipVariation
# setAnalysisMode -cppr both
# setDelayCalMode -siAware true -engine aae

setNanoRouteMode -drouteUseMultiCutViaEffort low
# setNanoRouteMode -routeWithViaInPin          false

# setDesignMode -bottomRoutingLayer            $ADK_MIN_ROUTING_LAYER_INNOVUS
# setDesignMode -topRoutingLayer               $ADK_MAX_ROUTING_LAYER_INNOVUS


# setNanoRouteMode -droutePostRouteSpreadWire  true
setNanoRouteMode -routeAntennaCellName       ANTENNA
setNanoRouteMode -routeInsertAntennaDiode    true

setNanoRouteMode -routeWithEco               true
setNanoRouteMode -routeWithTimingDriven      true
setNanoRouteMode -routeWithSiDriven          true 


#-------------------------
# Routing
#-------------------------
routeDesign
setNanoRouteMode -droutePostRouteSpreadWire true -routeWithTimingDriven false
routeDesign -wireOpt
setNanoRouteMode -droutePostRouteSpreadWire false
setExtractRCMode -engine postRoute -effortLevel low

setNanoRouteMode -drouteStartIteration  0
setNanoRouteMode -drouteEndIteration    0
detailRoute

# setNanoRouteMode -drouteStartIteration  1
# setNanoRouteMode -drouteEndIteration    1
# detailRoute

setNanoRouteMode -drouteStartIteration  default
setNanoRouteMode -drouteEndIteration    default

#-------------------------------------
# Post-Route Hold Time Opt
#-------------------------------------
if {$env(hold_slack)!="undefined"} {
  if {$env(setup_slack)!="undefined"} {
    optDesign -postRoute -hold -outDir ./reports -prefix postRoute_hold
  }
}