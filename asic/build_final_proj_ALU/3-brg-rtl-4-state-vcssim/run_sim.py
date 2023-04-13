#!/usr/bin/env python
#==========================================================================
# run_sim.py
#==========================================================================
# Author: Jack Brzozowski
# Date: December 14th, 2021
# 
#
# This script will run a vcs simulation, and is called by sim_all.py
#
import os 
import sys
import subprocess
import shutil
import argparse
from fnmatch import fnmatch
from termcolor import colored


#=================================================================================
# Helper functions
#=================================================================================

def get_env(envVarStr):
    var = os.getenv(envVarStr)
    try:
        assert var != None
    except:
        if envVarStr == "simtype":
            print("Please set {} after calling g.update_params in your construct.py file using <this-step-name>.update_params({'simtype': <param_value>}, False)".format(envVarStr))
        else:
            print("Please provide {} as a parameter in the mflowgen construct.py file".format(envVarStr))
        sys.exit()
    return var

#=================================================================================

# Begin Script

parser = argparse.ArgumentParser()
parser.add_argument("-t", metavar="<test_name>", default="basic",
                help="the test name to be run")
# parser.add_argument("-b", metavar="<be>", default="tb",
#                 help="the test name to be run")
args = parser.parse_args()
args.t= args.t.strip()
# print(args.t)

print(colored("=== Running run_sim.py -t {} =======".format(args.t), 'blue'))

waveform    = get_env("waveform")
design_name = get_env("design_name")
test_design_name = get_env("test_design_name")
pad_ring    = get_env("pad_ring")
dut_name    = get_env("dut_name")
clock_period= get_env("clock_period")
change_clock_period= get_env("change_clock_period")
input_delay = get_env("input_delay")
output_delay= get_env("output_delay")
simtype     = get_env("simtype")
debug       = get_env("debug")
extra_link_lib_dir = get_env("extra_link_lib_dir")


# Default arguments
vpddest=""
arg_string=""
if simtype == "rtl":
    arg_string += " ./inputs/rtl/{}.v".format(design_name)
if simtype == "gate-level":
    arg_string += " ./inputs/design.vcs.v"
try:
    for f in os.listdir("./inputs/adk"):
        if fnmatch(f, "*.v"):
            arg_string += " ./inputs/adk/{}".format(f)
except:
    print("./inputs/adk NOT FOUND")
try:
    if extra_link_lib_dir != "./inputs/adk" and simtype == "gate-level": # if extra link lib is not default
        for f in os.listdir(extra_link_lib_dir):
            if fnmatch(f, "*.v"):
                arg_string += " {}/{}".format(extra_link_lib_dir,f)
                print("Found SRAM verilog file")
            # else:
            #     print(extra_link_lib_dir)
            #     print("SRAM verilog NOT FOUND")
except:
    print("{} NOT FOUND".format(extra_link_lib_dir))

arg_string += " -full64 -debug_pp -sverilog +incdir+./inputs/testbenches +lint=all -xprop=tmerge"
arg_string += " -top {}_tb".format(test_design_name)
if debug == True :
    arg_string += " -debug_access+r"


# Add testbench 
arg_string += " ./inputs/testbenches/{}_{}_tb.v".format(test_design_name, args.t)

# Uniquify compilation and executable by test
# shutil.rmtree("./work/{}".format(args.t), ignore_errors=True)
# os.makedirs("./work/{}".format(args.t))
# arg_string += " -Mdir=./work/{}/csrc".format(args.t)
# arg_string += " -o ./work/{}/simv".format(args.t)

for f in os.listdir("./inputs"):
    if fnmatch(f, "design.args"):
        arg_string += " -file inputs/design.args"
    if fnmatch(f, "design.sdf"):
        arg_string += " +sdfverbose -sdf min:{}_tb.{}:inputs/design.sdf -negdelay".format(test_design_name, dut_name)


if simtype == "gate-level":
    # Add defines for gl sim
    if change_clock_period != "undefined":
        arg_string += " +define+CYCLE_TIME={}".format(change_clock_period)
        arg_string += " +define+VTB_INPUT_DELAY={}".format(float(input_delay)*float(clock_period))
        arg_string += " +define+VTB_OUTPUT_ASSERT_DELAY={}".format(float(change_clock_period)-(float(output_delay)*float(clock_period)))
    else:
        arg_string += " +define+CYCLE_TIME={}".format(clock_period)
        arg_string += " +define+VTB_INPUT_DELAY={}".format(float(input_delay)*float(clock_period))
        arg_string += " +define+VTB_OUTPUT_ASSERT_DELAY={}".format(float(clock_period)-(float(output_delay)*float(clock_period)))

if pad_ring == "True":
    # Apply VTB module name change for chip level designs
    arg_string += " +define+VTB_TOP_MODULE_NAME={}".format(design_name)

if waveform == "True" or not (fnmatch(args.t, "test_*") and fnmatch(args.t, "*test_*")): 
    print(f"Fnmatches: {fnmatch(args.t, 'test_*')}|{fnmatch(args.t, '*test_*')}")
    arg_string += " +vcs+dumpvars+outputs/vcd/{}.vcd".format(args.t)
    # arg_string += " +vcs+vcdpluson"
    # vpddest += "+vpdfile+outputs/vpd/{}.vpd".format(args.t)

if simtype == "rtl":
    # arg_string += " -y ./inputs/rtl"
    # arg_string += " +libext+.v"     
    arg_string += " +incdir+./inputs/rtl"
    arg_string += " -override_timescale=1ns/1ns"

if simtype == "rtl-hard":
    arg_string += " -y ./inputs/macrofiles"
    # arg_string += " -y ./inputs/rtl"
    # arg_string += " +libext+.v"
    arg_string += " -override_timescale=1ns/1ns"

if simtype == "gate-level":
    if arg_string.find("+sdfverbose") == -1:
        # Fast-Functional sim
        arg_string += " +delay_mode_zero"
    arg_string += " +neg_tchk"
    arg_string += " -hsopt=gates"
    arg_string += " -y ./inputs/macrofiles"
    arg_string += " -override_timescale=1ns/1ps"


# Add final arguments
arg_string += " -rad +vcs+saif_libcell -lca"



#===============================================================
# Run Simulation
#===============================================================

# Clean previous test run
shutil.rmtree("./csrc", ignore_errors=True)
try:
    os.remove("./simv")
except:
    print("No ./simv present, must be first run")

# VCS
# os.makedirs("./logs")
print("command: vcs {}".format(arg_string), flush=True)
with open("./logs/{}.log".format(args.t), mode="w") as f:
    subprocess.run("vcs {}".format(arg_string), shell=True, stdout=f, stderr=subprocess.STDOUT)
# SIMV
# os.makedirs("./reports")
# os.rename("./simv", "./work/{}/simv".format(args.t))      
with open("./reports/{}.rpt".format(args.t), mode="w") as f:
    # subprocess.run(["./work/{}/simv".format(args.t), vpddest], stdout=f, stderr=subprocess.STDOUT)    
    subprocess.run(["./simv"], stdout=f, stderr=subprocess.STDOUT)    

if open("./reports/{}.rpt".format(args.t), mode="r").read().find('[ passed ]') == -1:
    print(colored("[FAILED]", 'red'), flush=True)
    sys.exit(1) #Test failed :(
elif open("./reports/{}.rpt".format(args.t), mode="r").read().find('ERROR') == -1:
    print(colored("[PASSED]", 'green'), flush=True)
    sys.exit(0) #Test passed! :)
else: 
    print(colored("[PASSED]", 'green'), flush=True)
    sys.exit(2) #Test has Errors :(