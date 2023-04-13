#######################################################
#                                                     
#  Innovus Command Logging File                     
#  Created on Thu Apr 13 15:25:11 2023                
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
is_common_ui_mode
restoreDesign /home/ezw2/ece5745/ASIC_final_subword/asic/build_final_proj_ALU/7-brg-cadence-innovus-blocksetup/checkpoints/design.checkpoint/save.enc.dat ProcDpathAluWrapper
report_ports
timeDesign -preplace -prefix preplace -outDir ./reports/timing
checkDesign -all -noHtml -outfile init.check_design.rpt
check_timing
report_message -errors
place_opt_design -out_dir ./reports -prefix place
assignIoPins -pin *
addTieHiLo -cell {LOGIC1_X1  LOGIC0_X1}
timeDesign -preCTS -prefix preCTS -outDir ./reports/timing
create_ccopt_clock_tree_spec
ccopt_design -outDir ./reports -prefix cts
setNanoRouteMode -drouteUseMultiCutViaEffort low
setNanoRouteMode -routeAntennaCellName ANTENNA
setNanoRouteMode -routeInsertAntennaDiode true
setNanoRouteMode -routeWithEco true
setNanoRouteMode -routeWithTimingDriven true
setNanoRouteMode -routeWithSiDriven true
routeDesign
setNanoRouteMode -droutePostRouteSpreadWire true -routeWithTimingDriven false
routeDesign -wireOpt
setNanoRouteMode -droutePostRouteSpreadWire false
setExtractRCMode -engine postRoute -effortLevel low
setNanoRouteMode -drouteStartIteration 0
setNanoRouteMode -drouteEndIteration 0
detailRoute
setNanoRouteMode -drouteStartIteration default
setNanoRouteMode -drouteEndIteration default
getVersion
saveDesign ./checkpoints/design.checkpoint/save.enc -user_path
