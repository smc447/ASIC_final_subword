create_rc_corner -name typical \
   -cap_table "./inputs/adk/rtk-typical.captable" \
   -T 25

# For designs with hierarchical blocks or SRAMs, allow for defining a folder where lib files reside
if {$env(extra_link_lib_dir)!=""} {

   set extra_link_lib_dir $::env(extra_link_lib_dir)
   set link_libraries  [join "
                                       [list ./inputs/adk/stdcells.lib]
                                       [lsort [glob -nocomplain $extra_link_lib_dir/*.lib]]
                                    "]
} else {
   set link_libraries ./inputs/adk/stdcells.lib
}

if {[file exists ./inputs/adk/iocells.lib]} {
  lappend link_libraries ./inputs/adk/iocells.lib
}
if {[file exists ./inputs/adk/iocells-bondpads.lib]} {
  lappend link_libraries ./inputs/adk/iocells-bondpads.lib
}

create_library_set -name libs_typical \
   -timing $link_libraries

create_delay_corner -name delay_default \
   -early_library_set libs_typical \
   -late_library_set libs_typical \
   -rc_corner typical

create_constraint_mode -name constraints_default \
   -sdc_files [list ./inputs/design.sdc]

create_analysis_view -name analysis_default \
   -constraint_mode constraints_default \
   -delay_corner delay_default

set_analysis_view \
   -setup [list analysis_default] \
   -hold [list analysis_default]