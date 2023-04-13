#!/bin/csh -f

cd /home/ezw2/ece5745/ASIC_final_subword/asic/build_final_proj_ALU/3-brg-rtl-4-state-vcssim

#This ENV is used to avoid overriding current script in next vcselab run 
setenv SNPS_VCSELAB_SCRIPT_NO_OVERRIDE  1

/opt/synopsys/vcs/R-2020.12/linux64/bin/vcselab $* \
    -o \
    simv \
    -nobanner \

cd -

