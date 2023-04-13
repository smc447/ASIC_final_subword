create_library_set -name libs_typical\
   -timing\
    [list ./inputs/adk/stdcells.lib]
create_rc_corner -name typical\
   -cap_table ./inputs/adk/rtk-typical.captable\
   -preRoute_res 1\
   -postRoute_res 1\
   -preRoute_cap 1\
   -postRoute_cap 1\
   -postRoute_xcap 1\
   -preRoute_clkres 0\
   -preRoute_clkcap 0\
   -T 25
create_delay_corner -name delay_default\
   -rc_corner typical\
   -early_library_set libs_typical\
   -late_library_set libs_typical
create_constraint_mode -name constraints_default\
   -sdc_files\
    [list /dev/null]
create_analysis_view -name analysis_default -constraint_mode constraints_default -delay_corner delay_default
set_analysis_view -setup [list analysis_default] -hold [list analysis_default]
