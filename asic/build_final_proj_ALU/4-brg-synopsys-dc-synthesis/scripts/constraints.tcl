#=========================================================================
# Design Constraints File
#=========================================================================

# This constraint sets the target clock period for the chip in
# nanoseconds. Note that the first parameter is the name of the clock
# signal in your verlog design. If you called it something different than
# clk you will need to change this. You should set this constraint
# carefully. If the period is unrealistically small then the tools will
# spend forever trying to meet timing and ultimately fail. If the period
# is too large the tools will have no trouble but you will get a very
# conservative implementation.

set clock_net  $env(clk_port)
set clock_name ideal_clock

create_clock -name ${clock_name} \
             -period ${clock_period} \
             [get_ports ${clock_net}]

# This constraint sets the load capacitance in picofarads of the
# output pins of your design.

set_load -pin_load $ADK_TYPICAL_ON_CHIP_LOAD [all_outputs]

# This constraint sets the input drive strength of the input pins of
# your design. We specifiy a specific standard cell which models what
# would be driving the inputs. This should usually be a small inverter
# which is reasonable if another block of on-chip logic is driving
# your inputs.

set_driving_cell -no_design_rule \
  -lib_cell $ADK_DRIVING_CELL [all_inputs]


set input_delay [expr ${clock_period}*$env(input_delay)]
set output_delay [expr ${clock_period}*$env(output_delay)]

# set_input_delay constraints for input ports
#
# - make this non-zero to avoid hold buffers on input-registered designs
#
# Input delay automatically excludes clk in innovus, so we don't explicitly exclude it

set_input_delay -clock ${clock_name} ${input_delay} [all_inputs]

# set_output_delay constraints for output ports

set_output_delay -clock ${clock_name} $output_delay [all_outputs]

# Make all signals limit their fanout

set_max_fanout 20 $design_name

# Make all signals meet good slew

set_max_transition [expr 0.25*${clock_period}] $design_name

#set_input_transition 1 [all_inputs]
#set_max_transition 10 [all_outputs]

set_dont_use $ADK_DONT_USE_LIST