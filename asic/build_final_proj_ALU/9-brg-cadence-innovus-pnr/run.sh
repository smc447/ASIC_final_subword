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

# Compress the spef file

cd results
gzip *.spef
cd ..

# Set up the outputs

mkdir -p outputs && cd outputs

ln -sf ../checkpoints/design.checkpoint
# ln -sf ../results/design.gds    design.gds
# ln -sf ../results/design.vcs.v  design.vcs.v
# ln -sf ../results/design.lvs.v  design.lvs.v
# ln -sf ../results/*.mapped.sdf  design.sdf
# ln -sf ../results/*spef.gz      design.spef.gz
# ln -sf ../results/design.lef    design.lef

