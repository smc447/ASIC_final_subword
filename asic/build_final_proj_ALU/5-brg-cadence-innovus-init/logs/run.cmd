#######################################################
#                                                     
#  Innovus Command Logging File                     
#  Created on Thu Apr 13 15:24:17 2023                
#                                                     
#######################################################

#@(#)CDS: Innovus v20.12-s088_1 (64bit) 11/06/2020 10:29 (Linux 2.6.32-431.11.2.el6.x86_64)
#@(#)CDS: NanoRoute 20.12-s088_1 NR201104-1900/20_12-UB (database version 18.20.530) {superthreading v2.11}
#@(#)CDS: AAE 20.12-s034 (64bit) 11/06/2020 (Linux 2.6.32-431.11.2.el6.x86_64)
#@(#)CDS: CTE 20.12-s038_1 () Nov  5 2020 21:44:51 ( )
#@(#)CDS: SYNTECH 20.12-s015_1 () Oct  9 2020 06:18:19 ( )
#@(#)CDS: CPE v20.12-s080
#@(#)CDS: IQuantus/TQuantus 20.1.1-s391 (64bit) Tue Sep 8 11:07:25 PDT 2020 (Linux 2.6.32-431.11.2.el6.x86_64)

set_global _enable_mmmc_by_default_flow      $CTE::mmmc_default
suppressMessage ENCEXT-2799
set init_mmmc_file ./scripts/setup-timing.tcl
set init_verilog ./inputs/design.v
set init_top_cell ProcDpathAluWrapper
set init_lef_file {./inputs/adk/rtk-tech.lef ./inputs/adk/stdcells.lef ./inputs/adk/rtk-tech.lef ./inputs/adk/stdcells.lef}
set init_gnd_net {VSS VGND}
set init_pwr_net {VDD VPWR}
set init_design_uniquify 1
init_design
add_tracks
setDesignMode -process 45 -powerEffort high
setDesignMode -bottomRoutingLayer 2
setDesignMode -topRoutingLayer 7
setViaGenMode -ignore_viarule_enclosure false
setViaGenMode -optimize_cross_via true
setViaGenMode -ignore_DRC false
setAnalysisMode -analysisType onChipVariation -cppr both
setDelayCalMode -siAware true -engine aae
setNanoRouteMode -drouteUseMultiCutViaEffort medium
setNanoRouteMode -routeWithViaInPin false
setNanoRouteMode -drouteFixAntenna true
setNanoRouteMode -droutePostRouteSpreadWire true
reset_path_group -all
resetPathGroupOptions
group_path -name In2Reg  -from $inputs  -to $allregs
group_path -name Reg2Out -from $allregs -to $outputs
group_path -name In2Out  -from $inputs  -to $outputs
group_path -name Reg2Reg     -from $regs    -to $regs
group_path -name Reg2ClkGate -from $allregs -to $icgs
setPathGroupOptions Reg2Reg -effortLevel high
getVersion
saveDesign ./checkpoints/design.checkpoint/save.enc -user_path
