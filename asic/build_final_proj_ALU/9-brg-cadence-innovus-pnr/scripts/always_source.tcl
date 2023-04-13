#=========================================================================
# always_source.tcl
#=========================================================================
# This plug-in script is called from all Innovus flow scripts after
# loading setup.tcl.
#=========================================================================
# MFLOWGEN STEP NOTES
#  - Need to determine whether or not to make all of the box dimensions savedvars()
#  - Need to determine if track pitch and standard cell height should go into the ADK.tcl

#-------------------------------------------------------------------------
# Functions
#-------------------------------------------------------------------------

# Function to snap to track pitch

proc snapToTrackPitch {x} {
  global t_pitch
  return [expr [tcl::mathfunc::ceil [expr $x / $t_pitch] ] *  $t_pitch]
}


set t_pitch $ADK_TRACK_PITCH; # Pitch between m2 tracks (track pitch)
# set r_pitch 3.92; # Pitch between power rails (standard cell height) (Jack Brzozowski: Is this used anywhere?)


set io_cell_len $ADK_IO_CELL_LEN

set core_margin_len $ADK_CORE_MARGIN_LEN
