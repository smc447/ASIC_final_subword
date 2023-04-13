# ======================================================
# main.tcl - BRG Init Step
# ======================================================

set init_mmmc_file "./scripts/setup-timing.tcl"
set init_verilog   "./inputs/design.v"
# THIS LINE NEEDS TO BE CONFIGURABLE FOR MODULE NAME
set init_top_cell  $env(design_name)

if {$env(extra_link_lib_dir)!=""} {
    set extra_link_lib_dir $::env(extra_link_lib_dir)
    set init_lef_file  [join "
                              [list ./inputs/adk/rtk-tech.lef         \
                                    ./inputs/adk/stdcells.lef         ]
                              [lsort [glob -nocomplain ./inputs/adk/*.lef]]
                              [lsort [glob -nocomplain $extra_link_lib_dir/*.lef]]
                      "]
} else {
    set init_lef_file [join "
                              [list ./inputs/adk/rtk-tech.lef         \
                                    ./inputs/adk/stdcells.lef         ]
                              [lsort [glob -nocomplain ./inputs/adk/*.lef]]
                      "]
}

set init_gnd_net $ADK_GND_NETS
set init_pwr_net $ADK_PWR_NETS

#-------------------------
# Init
#-------------------------
# Uniquify the design to use multiple instantiations of the same module
set init_design_uniquify 1

init_design

if {[file exists ./scripts/post_init.tcl]} {
  source ./scripts/post_init.tcl
}

#-------------------------
# Routing
#-------------------------
add_tracks
setDesignMode -process $ADK_PROCESS -powerEffort high
setDesignMode -bottomRoutingLayer            $ADK_MIN_ROUTING_LAYER_INNOVUS
setDesignMode -topRoutingLayer               $ADK_MAX_ROUTING_LAYER_INNOVUS
setViaGenMode -ignore_viarule_enclosure false
setViaGenMode -optimize_cross_via true
setViaGenMode -ignore_DRC false

#-------------------------
# Nano Routing
#-------------------------
setAnalysisMode -analysisType onChipVariation -cppr both
setDelayCalMode -siAware true -engine aae

setNanoRouteMode -drouteUseMultiCutViaEffort medium
setNanoRouteMode -routeWithViaInPin          false
setNanoRouteMode -drouteFixAntenna           true
setNanoRouteMode -droutePostRouteSpreadWire  true


#----------------------------------------
# Path Groups 
#----------------------------------------

# Reset all existing path groups, including basic path groups

reset_path_group -all

# Reset all options set on all path groups

resetPathGroupOptions

# Create collection for each category

set inputs   [all_inputs -no_clocks]
set outputs  [all_outputs]
set icgs     [filter_collection [all_registers] "is_integrated_clock_gating_cell == true"]
set regs     [remove_from_collection [all_registers -edge_triggered] $$icgs]
set allregs  [all_registers]

# Group paths

group_path -name In2Reg  -from $inputs  -to $allregs
group_path -name Reg2Out -from $allregs -to $outputs
group_path -name In2Out  -from $inputs  -to $outputs

group_path -name Reg2Reg     -from $regs    -to $regs
group_path -name Reg2ClkGate -from $allregs -to $icgs

# High-effort path groups

setPathGroupOptions Reg2Reg -effortLevel high
