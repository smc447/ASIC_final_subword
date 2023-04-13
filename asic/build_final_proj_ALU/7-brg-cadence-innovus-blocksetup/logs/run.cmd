#######################################################
#                                                     
#  Innovus Command Logging File                     
#  Created on Thu Apr 13 15:24:42 2023                
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
restoreDesign /home/ezw2/ece5745/ASIC_final_subword/asic/build_final_proj_ALU/5-brg-cadence-innovus-init/checkpoints/design.checkpoint/save.enc.dat ProcDpathAluWrapper
floorPlan -r 1.0 0.70 37.4 37.4 37.4 37.4
globalNetConnect VDD -type tiehi -pin VDD -all -verbose
globalNetConnect VDD -type pgpin -pin VDD -all -verbose
globalNetConnect VPWR -type tiehi -pin VPWR -all -verbose
globalNetConnect VPWR -type pgpin -pin VPWR -all -verbose
globalNetConnect VSS -type tielo -pin VSS -all -verbose
globalNetConnect VSS -type pgpin -pin VSS -all -verbose
globalNetConnect VGND -type tielo -pin VGND -all -verbose
globalNetConnect VGND -type pgpin -pin VGND -all -verbose
sroute -nets {VDD VSS}
addRing -nets {VDD VSS} -type core_rings -follow core -layer {top 7 bottom 7 left 6 right 6} -width 11.5 -spacing 4.80 -offset 4.80 -extend_corner {tl tr bl br lt lb rt rb}
setViaGenMode -reset
setViaGenMode -viarule_preference default
setViaGenMode -ignore_DRC false
setAddStripeMode -reset
setAddStripeMode -stacked_via_bottom_layer 1 -stacked_via_top_layer 7
addStripe -nets {VSS VDD} -layer 6 -direction vertical -width 1.68 -spacing 3.92 -set_to_set_distance 11.2 -max_same_layer_jog_length 5.6 -padcore_ring_bottom_layer_limit 6 -padcore_ring_top_layer_limit 7 -start 5.6
setViaGenMode -reset
setViaGenMode -viarule_preference default
setViaGenMode -ignore_DRC false
setAddStripeMode -reset
setAddStripeMode -stacked_via_bottom_layer 6 -stacked_via_top_layer 7
addStripe -nets {VSS VDD} -layer 7 -direction horizontal -width 1.68 -spacing 3.92 -set_to_set_distance 11.2 -max_same_layer_jog_length 5.6 -padcore_ring_bottom_layer_limit 6 -padcore_ring_top_layer_limit 7 -start 5.6
getVersion
saveDesign ./checkpoints/design.checkpoint/save.enc -user_path
