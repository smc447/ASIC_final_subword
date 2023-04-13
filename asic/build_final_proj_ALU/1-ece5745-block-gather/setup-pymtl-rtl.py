#=========================================================================
# setup-pymtl-rtl.py
#=========================================================================
# Scans the build folder in the pymtl-rtl folder in the outputs directory
# of the rtl step.
#
# If pad_ring == True:
# Copies all *__pickled.v files to the rtl/build folder, keeping the pickled extension
# Copies all .v files in the pymtl-rtl folder to the rtl folder
#
# If pad_ring == False:
# Copies all *__pickled.v files to the rtl folder in the
# outputs directory and removes the __pickled extension.
# Copies all .v files in the pymtl-rtl folder to the rtl folder
#
#
#
# Author : Jack Brzozowski
# Date   : December 4nd, 2021
#

import os
from shutil import copyfile
import sys

class SetupPyMTLrtl:

    def __init__(self, pad_ring=False):

        # Attributes
        self.pad_ring=pad_ring

        if(self.pad_ring):
            self.copy_pickled_files()
            self.copy_verilog_files()
        else:
            print("Copying pickled files into outputs, pad_ring=False\n Renaming pickled files")
            self.copy_pickled_files()
            self.rename_pickled_files()
            # self.copy_verilog_files()



    # Class functions

    # pad-ring =====================================================================================================
    def copy_verilog_files(self):
        print("Copying verilog files from source directory")
        for filename in os.listdir("./outputs/raw_rtl/"):
            if filename.endswith(".v"):
                copyfile("./outputs/raw_rtl/{}".format(filename), "./outputs/rtl/{}".format(filename))

    # No pad-ring ==================================================================================================
    def copy_pickled_files(self):
        for filename in os.listdir("./outputs/build"):
            if filename.endswith("__pickled.v"):
                copyfile("./outputs/build/{}".format(filename), "./outputs/rtl/{}".format(filename))

    def rename_pickled_files(self):
        for filename in os.listdir("./outputs/rtl"):
            if filename.endswith("__pickled.v"):
                newfilename=filename[0:-11]+".v"
                os.rename("./outputs/rtl/{}".format(filename), "./outputs/rtl/{}".format(newfilename))


def main(argv):

    if '-h' in argv:
        print("\nUsage: python setup-pymtl-rtl.py [-h][-p] \n[-h]: Display help message \n [-p]: Indicates that this design uses a pad ring, it's top level verilog module instantiates input and output pads")
    elif '-p' in argv:
        print("Running setup-pymtl-rtl.py -p\n=========================")
        SetupPyMTLrtl(True) # Pad-Ring design
    else:
        print("Running setup-pymtl-rtl.py\n============================")
        SetupPyMTLrtl() # No Pad-Ring, use pickled file as top


if __name__ == '__main__':
    main(sys.argv)
