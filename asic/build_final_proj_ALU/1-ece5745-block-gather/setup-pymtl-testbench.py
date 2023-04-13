#=========================================================================
# setup-pymtl-testbench.py
#=========================================================================
# Scans the build folder in the pymtl-rtl folder in the outputs directory
# of the testbench step. Finds all *_tb.v and *_tb.v.cases and puts them into the testbenches folder
#
#
# Author : Jack Brzozowski
# Date   : December 4nd, 2021
#

import os
from shutil import copyfile
import sys

class SetupPyMTLtestbench:

    def __init__(self):

        # Attributes
        self.copy_testbenches()

    # Class functions

    def copy_testbenches(self):
        design_name = get_env('design_name') + '_' # Add underscore to make sure designs with same substring don't get added accidentally
        pad_ring    = get_env('pad_ring')
        if pad_ring:
            design_name = get_env('test_design_name') + '_' # Add underscore to make sure designs with same substring don't get added accidentally
        print("Copying testbenches of the format {}_<test_name>_tb.v(.cases)\n".format(design_name))
        # Only bring in testbenches for this design, not all the ones in the build folder
        for filename in os.listdir("./outputs/build"):
            if filename.startswith("{}".format(design_name)) and filename.endswith("_tb.v"):
                print("Copying {}".format(filename))
                copyfile("./outputs/build/{}".format(filename), "./outputs/testbenches/{}".format(filename))
            elif filename.startswith("{}".format(design_name)) and filename.endswith("_tb.v.cases"):
                print("Copying {}".format(filename))
                copyfile("./outputs/build/{}".format(filename), "./outputs/testbenches/{}".format(filename))
        print("\n")

#=================================================================================
# Helper functions
#=================================================================================

def get_env(envVarStr):
    var = os.getenv(envVarStr)
    try:
        assert var != None
    except:
        print("Please provide {} as a parameter in the mflowgen construct.py file".format(envVarStr))
        sys.exit()
    return var

#=================================================================================

def main(argv):
    print("Running setup-pymtl-testbench.py\n============================")
    if '-h' in argv:
        print("\nUsage: python setup-pymtl-rtl.py [-h][-p] \n[-h]: Display help message \n")
    else:
        SetupPyMTLtestbench() # No Pad-Ring, use pickled file as top

if __name__ == '__main__':
    main(sys.argv)
