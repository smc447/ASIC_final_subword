#! /usr/bin/env bash
#=========================================================================
# run.sh
#=========================================================================
# Author : Jack Brzozowski, modified from Christopher Torng
# Date   : November 16th, 2021
#

# Print commands during execution

set -x


# Innovus shell

innovus_exec='innovus -overwrite -64 -nowin -init'


# Build directories

rm -rf ./logs
rm -rf ./reports
rm -rf ./results

mkdir -p logs
mkdir -p reports
mkdir -p results
mkdir -p checkpoints/design.checkpoint

$innovus_exec START.tcl -log logs/run.log || exit 1


# Set up the outputs

mkdir -p outputs && cd outputs

ln -sf ../checkpoints/design.checkpoint


