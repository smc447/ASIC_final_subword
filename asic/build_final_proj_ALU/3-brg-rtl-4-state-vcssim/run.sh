#! /usr/bin/env bash
#=========================================================================
# run.sh
#=========================================================================
# Author : Jack Brzozowski
# Date   : December 14th, 2021
#

# Print commands during execution

set -x

# Build directories

rm -rf ./logs
rm -rf ./reports
# rm -rf ./results

mkdir -p logs
mkdir -p reports
# mkdir -p results

# Set up the outputs

mkdir -p outputs/vpd
mkdir -p outputs/vcd
mkdir -p outputs/saif


python sim_all.py







