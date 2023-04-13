
#==========================================================================
# sim_all.py
#==========================================================================
# Author: Jack Brzozowski
# Date: December 14th, 2021
# 
#
# This script will run a vcs simulation with every testbench that you include in your "testbenches" folder
# 

import os
import subprocess
import shutil
import sys
import argparse
import stat
from fnmatch import fnmatch
from termcolor import colored

def get_env(envVarStr):
    var = os.getenv(envVarStr)
    try:
        assert var != None
    except:
        if envVarStr.isupper():
            print("Please set {} as a global environment variable in the adk.sh file for this technology using export {}=<value>".format(envVarStr,envVarStr))
        else:
            print("Please provide {} as a parameter in the mflowgen construct.py file".format(envVarStr))
        sys.exit()
    return var

def main():

    parser = argparse.ArgumentParser()
    parser.add_argument("--qsub", action="store_true",
                    help="run the simulations on the cluster")

    args = parser.parse_args()
    # print(args.qsub)

    print("Running Tests:", flush=True)
    results=[]
    i=0

    waveform= get_env("waveform")

    # Loop through all the tests in testbenches
    for f in os.listdir("./inputs/testbenches"):
        if fnmatch(f, "*.v"):

            i += 1 # Increment test number
            design_name=get_env("test_design_name") + "_"

            test_name = f.split(design_name)[1].split("_tb")[0] 
            # print("testname: {}".format(test_name))
            arg_string = "-t " + test_name

            # print(arg_string, flush=True)

            # arg_string = ""
            # cmd = "./run_sim.py" + arg_string

            if args.qsub:
                p= subprocess.run(["qsub",
                                "-N", "sim_{}".format(test_name),
                                "-d", os.getcwd(),
                                "-o", "qsub_{}.out".format(test_name),
                                "-e", "qsub_{}.err".format(test_name),
                                "-V",
                                "-F", arg_string,
                                "./run_sim.py"])
            else:
                print(colored(f'Run #{i}', 'blue'), flush=True)
                p= subprocess.run(["./run_sim.py", arg_string])
                # subprocess.run([cmd])
            if p.returncode == 1:
                results.append(colored("[FAILED]: {}".format(test_name), 'red'))
            # elif p.returncode == 2:
            #     results.append(colored("[ERROR]: {} - 'check ./reports/{}.rpt for more details'".format(test_name, test_name), 'yellow'))
            else:
                results.append(colored("[PASSED]: {}".format(test_name), 'green'))
            # Create a saif file for this run
            if waveform == 'True' or not (fnmatch(test_name, "test_*") and fnmatch(test_name, "*test_*")):
                subprocess.run(["vcd2saif", "-input", "./outputs/vcd/{}.vcd".format(test_name),"-output", "./outputs/saif/{}.saif".format(test_name)])
    for result in results:
        print(result)
    with open( 'outputs/sim.summary.txt', 'w' ) as f:
       f.write( '==========================================================================\n')
       for result in results:
           f.write( result + '\n' )



if __name__ == "__main__":
    print("=== Running sim_all.py ================")
    main()
    print("=== Ending Simulations ================\n")