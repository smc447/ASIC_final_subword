#=========================================================================
# Makefile
#=========================================================================
# Generator : /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/backends/make_backend.py

SHELL=/usr/bin/env bash -euo pipefail

# $1 -- $dst
# $2 -- $src
# $3 -- $stamp

define cpdir
	rm -rf ./$1
	cp -aL $2 $1 || true
	chmod -R +w $1
	touch $3
endef

# $1 -- $dst
# $2 -- $src
# $3 -- $stamp

define cpdir-and-parameterize
	rm -rf ./$1
	cp -aL $2 $1 || true
	chmod -R +w $1
	cp .mflowgen/$1/configure.yml $1
	touch $3
endef

# $1 -- $dst
# $2 -- $src
# $3 -- $stamp

define mkdir-and-symlink
	rm -rf ./$1
	mkdir -p $1
	cd $1 && ln -sf ../$2/* . && cd ..
	rm $1/configure.yml && cp .mflowgen/$1/configure.yml $1
	touch $3
endef

# $1 -- $dst_dir
# $2 -- $dst
# $3 -- $src
# $4 -- $stamp

define symlink
	mkdir -p $1
	cd $1 && ln -sf $3 $2 && touch $4
endef

# $1 -- $stamp

define stamp
	touch $1
endef

# Default

default: build-info ece5745-block-gather freepdk-45nm brg-rtl-4-state-vcssim brg-synopsys-dc-synthesis brg-cadence-innovus-init post-synth-gate-level-simulation brg-cadence-innovus-blocksetup post-synth-power-analysis brg-cadence-innovus-pnr brg-synth-flow-summary brg-cadence-innovus-signoff brg-flow-summary

# ------------------------------------------------------------------------
# build-info
# ------------------------------------------------------------------------

# build dir

ifeq ("$(wildcard 0-build-info/.prebuilt)","")
0-build-info/.stamp:
	$(call cpdir-and-parameterize,0-build-info,../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/info,0-build-info/.stamp)
endif

# collect inputs

# execute

ifeq ("$(wildcard 0-build-info/.prebuilt)","")

define 0_build_info_commands_rule
	mkdir -p 0-build-info/outputs && set -o pipefail && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t build-info && chmod +x .mflowgen/0-build-info/mflowgen-run && cp -f .mflowgen/0-build-info/mflowgen-run 0-build-info && if [[ -e .mflowgen/0-build-info/mflowgen-debug ]]; then chmod +x .mflowgen/0-build-info/mflowgen-debug && cp -f .mflowgen/0-build-info/mflowgen-debug 0-build-info; fi && if [[ -e .mflowgen/0-build-info/mflowgen-check-preconditions.py ]]; then chmod +x .mflowgen/0-build-info/mflowgen-check-preconditions.py && cp -f .mflowgen/0-build-info/mflowgen-check-preconditions.py 0-build-info; fi && if [[ -e .mflowgen/0-build-info/mflowgen-check-postconditions.py ]]; then chmod +x .mflowgen/0-build-info/mflowgen-check-postconditions.py && cp -f .mflowgen/0-build-info/mflowgen-check-postconditions.py 0-build-info; fi && cd 0-build-info && if [[ -e mflowgen-check-preconditions.py ]]; then ./mflowgen-check-preconditions.py || exit 1; fi && ./mflowgen-run 2>&1 | tee mflowgen-run.log || exit 1 && cd .. && touch -c 0-build-info/outputs/*
endef

0-build-info/.execstamp: 0-build-info/.stamp
	$(call 0_build_info_commands_rule)

0-build-info/.execstamp.execute-phony: 0-build-info/.execstamp
	touch $@

endif

# collect outputs

# post-conditions

define 0_build_info_post_conditions_commands_rule
	cd 0-build-info && if [[ -e mflowgen-check-postconditions.py ]]; then ./mflowgen-check-postconditions.py || exit 1; fi && cd ..
endef

0-build-info/.postconditions.stamp: 0-build-info/.execstamp 0-build-info/.execstamp.execute-phony
	$(call 0_build_info_post_conditions_commands_rule)
	touch $@

# alias

.PHONY: build-info

build-info: 0-build-info/.execstamp 0-build-info/.execstamp.execute-phony 0-build-info/.postconditions.stamp

.PHONY: 0

0: 0-build-info/.execstamp 0-build-info/.execstamp.execute-phony 0-build-info/.postconditions.stamp

# debug

# ------------------------------------------------------------------------
# ece5745-block-gather
# ------------------------------------------------------------------------

# build dir

ifeq ("$(wildcard 1-ece5745-block-gather/.prebuilt)","")
1-ece5745-block-gather/.stamp:
	$(call cpdir-and-parameterize,1-ece5745-block-gather,../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/ece5745-block-gather,1-ece5745-block-gather/.stamp)
endif

# collect inputs

# execute

ifeq ("$(wildcard 1-ece5745-block-gather/.prebuilt)","")

define 1_ece5745_block_gather_commands_rule
	mkdir -p 1-ece5745-block-gather/outputs && set -o pipefail && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t ece5745-block-gather && chmod +x .mflowgen/1-ece5745-block-gather/mflowgen-run && cp -f .mflowgen/1-ece5745-block-gather/mflowgen-run 1-ece5745-block-gather && if [[ -e .mflowgen/1-ece5745-block-gather/mflowgen-debug ]]; then chmod +x .mflowgen/1-ece5745-block-gather/mflowgen-debug && cp -f .mflowgen/1-ece5745-block-gather/mflowgen-debug 1-ece5745-block-gather; fi && if [[ -e .mflowgen/1-ece5745-block-gather/mflowgen-check-preconditions.py ]]; then chmod +x .mflowgen/1-ece5745-block-gather/mflowgen-check-preconditions.py && cp -f .mflowgen/1-ece5745-block-gather/mflowgen-check-preconditions.py 1-ece5745-block-gather; fi && if [[ -e .mflowgen/1-ece5745-block-gather/mflowgen-check-postconditions.py ]]; then chmod +x .mflowgen/1-ece5745-block-gather/mflowgen-check-postconditions.py && cp -f .mflowgen/1-ece5745-block-gather/mflowgen-check-postconditions.py 1-ece5745-block-gather; fi && cd 1-ece5745-block-gather && if [[ -e mflowgen-check-preconditions.py ]]; then ./mflowgen-check-preconditions.py || exit 1; fi && ./mflowgen-run 2>&1 | tee mflowgen-run.log || exit 1 && cd .. && touch -c 1-ece5745-block-gather/outputs/*
endef

1-ece5745-block-gather/.execstamp: 1-ece5745-block-gather/.stamp
	$(call 1_ece5745_block_gather_commands_rule)
	touch $@

1-ece5745-block-gather/outputs/.execstamp.rtl: 1-ece5745-block-gather/.execstamp
	touch $@
1-ece5745-block-gather/outputs/.execstamp.testbenches: 1-ece5745-block-gather/.execstamp
	touch $@

endif

# collect outputs

1-ece5745-block-gather/outputs/.stamp.rtl: 1-ece5745-block-gather/.execstamp 1-ece5745-block-gather/outputs/.execstamp.rtl 1-ece5745-block-gather/outputs/.execstamp.testbenches
	$(call stamp,1-ece5745-block-gather/outputs/.stamp.rtl)

1-ece5745-block-gather/outputs/.stamp.testbenches: 1-ece5745-block-gather/.execstamp 1-ece5745-block-gather/outputs/.execstamp.rtl 1-ece5745-block-gather/outputs/.execstamp.testbenches
	$(call stamp,1-ece5745-block-gather/outputs/.stamp.testbenches)

# post-conditions

define 1_ece5745_block_gather_post_conditions_commands_rule
	cd 1-ece5745-block-gather && if [[ -e mflowgen-check-postconditions.py ]]; then ./mflowgen-check-postconditions.py || exit 1; fi && cd ..
endef

1-ece5745-block-gather/.postconditions.stamp: 1-ece5745-block-gather/.execstamp 1-ece5745-block-gather/outputs/.execstamp.rtl 1-ece5745-block-gather/outputs/.execstamp.testbenches 1-ece5745-block-gather/outputs/.stamp.rtl 1-ece5745-block-gather/outputs/.stamp.testbenches
	$(call 1_ece5745_block_gather_post_conditions_commands_rule)
	touch $@

# alias

.PHONY: ece5745-block-gather

ece5745-block-gather: 1-ece5745-block-gather/.execstamp 1-ece5745-block-gather/.postconditions.stamp 1-ece5745-block-gather/outputs/.execstamp.rtl 1-ece5745-block-gather/outputs/.execstamp.testbenches 1-ece5745-block-gather/outputs/.stamp.rtl 1-ece5745-block-gather/outputs/.stamp.testbenches

.PHONY: 1

1: 1-ece5745-block-gather/.execstamp 1-ece5745-block-gather/.postconditions.stamp 1-ece5745-block-gather/outputs/.execstamp.rtl 1-ece5745-block-gather/outputs/.execstamp.testbenches 1-ece5745-block-gather/outputs/.stamp.rtl 1-ece5745-block-gather/outputs/.stamp.testbenches

# debug

# ------------------------------------------------------------------------
# freepdk-45nm
# ------------------------------------------------------------------------

# build dir

ifeq ("$(wildcard 2-freepdk-45nm/.prebuilt)","")
2-freepdk-45nm/.stamp:
	$(call mkdir-and-symlink,2-freepdk-45nm,../../../../../../classes/ece5745/install/adk-pkgs/freepdk-45nm,2-freepdk-45nm/.stamp)
endif

# collect inputs

# execute

ifeq ("$(wildcard 2-freepdk-45nm/.prebuilt)","")

define 2_freepdk_45nm_commands_rule
	mkdir -p 2-freepdk-45nm/outputs && set -o pipefail && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t freepdk-45nm && chmod +x .mflowgen/2-freepdk-45nm/mflowgen-run && cp -f .mflowgen/2-freepdk-45nm/mflowgen-run 2-freepdk-45nm && if [[ -e .mflowgen/2-freepdk-45nm/mflowgen-debug ]]; then chmod +x .mflowgen/2-freepdk-45nm/mflowgen-debug && cp -f .mflowgen/2-freepdk-45nm/mflowgen-debug 2-freepdk-45nm; fi && if [[ -e .mflowgen/2-freepdk-45nm/mflowgen-check-preconditions.py ]]; then chmod +x .mflowgen/2-freepdk-45nm/mflowgen-check-preconditions.py && cp -f .mflowgen/2-freepdk-45nm/mflowgen-check-preconditions.py 2-freepdk-45nm; fi && if [[ -e .mflowgen/2-freepdk-45nm/mflowgen-check-postconditions.py ]]; then chmod +x .mflowgen/2-freepdk-45nm/mflowgen-check-postconditions.py && cp -f .mflowgen/2-freepdk-45nm/mflowgen-check-postconditions.py 2-freepdk-45nm; fi && cd 2-freepdk-45nm && if [[ -e mflowgen-check-preconditions.py ]]; then ./mflowgen-check-preconditions.py || exit 1; fi && ./mflowgen-run 2>&1 | tee mflowgen-run.log || exit 1 && cd .. && touch -c 2-freepdk-45nm/outputs/*
endef

2-freepdk-45nm/.execstamp: 2-freepdk-45nm/.stamp
	$(call 2_freepdk_45nm_commands_rule)
	touch $@

2-freepdk-45nm/outputs/.execstamp.adk: 2-freepdk-45nm/.execstamp
	touch $@

endif

# collect outputs

2-freepdk-45nm/outputs/.stamp.adk: 2-freepdk-45nm/.execstamp 2-freepdk-45nm/outputs/.execstamp.adk
	$(call stamp,2-freepdk-45nm/outputs/.stamp.adk)

# post-conditions

define 2_freepdk_45nm_post_conditions_commands_rule
	cd 2-freepdk-45nm && if [[ -e mflowgen-check-postconditions.py ]]; then ./mflowgen-check-postconditions.py || exit 1; fi && cd ..
endef

2-freepdk-45nm/.postconditions.stamp: 2-freepdk-45nm/.execstamp 2-freepdk-45nm/outputs/.execstamp.adk 2-freepdk-45nm/outputs/.stamp.adk
	$(call 2_freepdk_45nm_post_conditions_commands_rule)
	touch $@

# alias

.PHONY: freepdk-45nm

freepdk-45nm: 2-freepdk-45nm/.execstamp 2-freepdk-45nm/.postconditions.stamp 2-freepdk-45nm/outputs/.execstamp.adk 2-freepdk-45nm/outputs/.stamp.adk

.PHONY: 2

2: 2-freepdk-45nm/.execstamp 2-freepdk-45nm/.postconditions.stamp 2-freepdk-45nm/outputs/.execstamp.adk 2-freepdk-45nm/outputs/.stamp.adk

# debug

# ------------------------------------------------------------------------
# brg-rtl-4-state-vcssim
# ------------------------------------------------------------------------

# build dir

ifeq ("$(wildcard 3-brg-rtl-4-state-vcssim/.prebuilt)","")
3-brg-rtl-4-state-vcssim/.stamp: 1-ece5745-block-gather/.execstamp 1-ece5745-block-gather/.postconditions.stamp 1-ece5745-block-gather/outputs/.execstamp.rtl 1-ece5745-block-gather/outputs/.execstamp.testbenches 1-ece5745-block-gather/outputs/.stamp.rtl 1-ece5745-block-gather/outputs/.stamp.testbenches
3-brg-rtl-4-state-vcssim/.stamp:
	$(call cpdir-and-parameterize,3-brg-rtl-4-state-vcssim,../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-synopsys-vcs-sim,3-brg-rtl-4-state-vcssim/.stamp)
endif

# collect inputs

ifeq ("$(wildcard 3-brg-rtl-4-state-vcssim/.prebuilt)","")
3-brg-rtl-4-state-vcssim/inputs/.stamp.rtl: 3-brg-rtl-4-state-vcssim/.stamp 1-ece5745-block-gather/outputs/.stamp.rtl
	$(call symlink,3-brg-rtl-4-state-vcssim/inputs,rtl,../../1-ece5745-block-gather/outputs/rtl,.stamp.rtl)
endif

ifeq ("$(wildcard 3-brg-rtl-4-state-vcssim/.prebuilt)","")
3-brg-rtl-4-state-vcssim/inputs/.stamp.testbenches: 3-brg-rtl-4-state-vcssim/.stamp 1-ece5745-block-gather/outputs/.stamp.testbenches
	$(call symlink,3-brg-rtl-4-state-vcssim/inputs,testbenches,../../1-ece5745-block-gather/outputs/testbenches,.stamp.testbenches)
endif

# execute

ifeq ("$(wildcard 3-brg-rtl-4-state-vcssim/.prebuilt)","")

define 3_brg_rtl_4_state_vcssim_commands_rule
	mkdir -p 3-brg-rtl-4-state-vcssim/outputs && set -o pipefail && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-rtl-4-state-vcssim && chmod +x .mflowgen/3-brg-rtl-4-state-vcssim/mflowgen-run && cp -f .mflowgen/3-brg-rtl-4-state-vcssim/mflowgen-run 3-brg-rtl-4-state-vcssim && if [[ -e .mflowgen/3-brg-rtl-4-state-vcssim/mflowgen-debug ]]; then chmod +x .mflowgen/3-brg-rtl-4-state-vcssim/mflowgen-debug && cp -f .mflowgen/3-brg-rtl-4-state-vcssim/mflowgen-debug 3-brg-rtl-4-state-vcssim; fi && if [[ -e .mflowgen/3-brg-rtl-4-state-vcssim/mflowgen-check-preconditions.py ]]; then chmod +x .mflowgen/3-brg-rtl-4-state-vcssim/mflowgen-check-preconditions.py && cp -f .mflowgen/3-brg-rtl-4-state-vcssim/mflowgen-check-preconditions.py 3-brg-rtl-4-state-vcssim; fi && if [[ -e .mflowgen/3-brg-rtl-4-state-vcssim/mflowgen-check-postconditions.py ]]; then chmod +x .mflowgen/3-brg-rtl-4-state-vcssim/mflowgen-check-postconditions.py && cp -f .mflowgen/3-brg-rtl-4-state-vcssim/mflowgen-check-postconditions.py 3-brg-rtl-4-state-vcssim; fi && cd 3-brg-rtl-4-state-vcssim && if [[ -e mflowgen-check-preconditions.py ]]; then ./mflowgen-check-preconditions.py || exit 1; fi && ./mflowgen-run 2>&1 | tee mflowgen-run.log || exit 1 && cd .. && touch -c 3-brg-rtl-4-state-vcssim/outputs/*
endef

3-brg-rtl-4-state-vcssim/.execstamp: 3-brg-rtl-4-state-vcssim/.stamp 3-brg-rtl-4-state-vcssim/inputs/.stamp.rtl 3-brg-rtl-4-state-vcssim/inputs/.stamp.testbenches
	$(call 3_brg_rtl_4_state_vcssim_commands_rule)
	touch $@

3-brg-rtl-4-state-vcssim/outputs/.execstamp.vpd: 3-brg-rtl-4-state-vcssim/.execstamp
	touch $@
3-brg-rtl-4-state-vcssim/outputs/.execstamp.vcd: 3-brg-rtl-4-state-vcssim/.execstamp
	touch $@
3-brg-rtl-4-state-vcssim/outputs/.execstamp.saif: 3-brg-rtl-4-state-vcssim/.execstamp
	touch $@
3-brg-rtl-4-state-vcssim/outputs/.execstamp.sim.summary.txt: 3-brg-rtl-4-state-vcssim/.execstamp
	touch $@

endif

# collect outputs

3-brg-rtl-4-state-vcssim/outputs/.stamp.vpd: 3-brg-rtl-4-state-vcssim/.execstamp 3-brg-rtl-4-state-vcssim/outputs/.execstamp.saif 3-brg-rtl-4-state-vcssim/outputs/.execstamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vpd
	$(call stamp,3-brg-rtl-4-state-vcssim/outputs/.stamp.vpd)

3-brg-rtl-4-state-vcssim/outputs/.stamp.vcd: 3-brg-rtl-4-state-vcssim/.execstamp 3-brg-rtl-4-state-vcssim/outputs/.execstamp.saif 3-brg-rtl-4-state-vcssim/outputs/.execstamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vpd
	$(call stamp,3-brg-rtl-4-state-vcssim/outputs/.stamp.vcd)

3-brg-rtl-4-state-vcssim/outputs/.stamp.saif: 3-brg-rtl-4-state-vcssim/.execstamp 3-brg-rtl-4-state-vcssim/outputs/.execstamp.saif 3-brg-rtl-4-state-vcssim/outputs/.execstamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vpd
	$(call stamp,3-brg-rtl-4-state-vcssim/outputs/.stamp.saif)

3-brg-rtl-4-state-vcssim/outputs/.stamp.sim.summary.txt: 3-brg-rtl-4-state-vcssim/.execstamp 3-brg-rtl-4-state-vcssim/outputs/.execstamp.saif 3-brg-rtl-4-state-vcssim/outputs/.execstamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vpd
	$(call stamp,3-brg-rtl-4-state-vcssim/outputs/.stamp.sim.summary.txt)

# post-conditions

define 3_brg_rtl_4_state_vcssim_post_conditions_commands_rule
	cd 3-brg-rtl-4-state-vcssim && if [[ -e mflowgen-check-postconditions.py ]]; then ./mflowgen-check-postconditions.py || exit 1; fi && cd ..
endef

3-brg-rtl-4-state-vcssim/.postconditions.stamp: 3-brg-rtl-4-state-vcssim/.execstamp 3-brg-rtl-4-state-vcssim/outputs/.execstamp.saif 3-brg-rtl-4-state-vcssim/outputs/.execstamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vpd 3-brg-rtl-4-state-vcssim/outputs/.stamp.saif 3-brg-rtl-4-state-vcssim/outputs/.stamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.stamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.stamp.vpd
	$(call 3_brg_rtl_4_state_vcssim_post_conditions_commands_rule)
	touch $@

# alias

.PHONY: brg-rtl-4-state-vcssim

brg-rtl-4-state-vcssim: 3-brg-rtl-4-state-vcssim/.execstamp 3-brg-rtl-4-state-vcssim/.postconditions.stamp 3-brg-rtl-4-state-vcssim/outputs/.execstamp.saif 3-brg-rtl-4-state-vcssim/outputs/.execstamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vpd 3-brg-rtl-4-state-vcssim/outputs/.stamp.saif 3-brg-rtl-4-state-vcssim/outputs/.stamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.stamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.stamp.vpd

.PHONY: 3

3: 3-brg-rtl-4-state-vcssim/.execstamp 3-brg-rtl-4-state-vcssim/.postconditions.stamp 3-brg-rtl-4-state-vcssim/outputs/.execstamp.saif 3-brg-rtl-4-state-vcssim/outputs/.execstamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vpd 3-brg-rtl-4-state-vcssim/outputs/.stamp.saif 3-brg-rtl-4-state-vcssim/outputs/.stamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.stamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.stamp.vpd

# debug

# ------------------------------------------------------------------------
# brg-synopsys-dc-synthesis
# ------------------------------------------------------------------------

# build dir

ifeq ("$(wildcard 4-brg-synopsys-dc-synthesis/.prebuilt)","")
4-brg-synopsys-dc-synthesis/.stamp: 1-ece5745-block-gather/.execstamp 1-ece5745-block-gather/.postconditions.stamp 1-ece5745-block-gather/outputs/.execstamp.rtl 1-ece5745-block-gather/outputs/.execstamp.testbenches 1-ece5745-block-gather/outputs/.stamp.rtl 1-ece5745-block-gather/outputs/.stamp.testbenches
4-brg-synopsys-dc-synthesis/.stamp: 2-freepdk-45nm/.execstamp 2-freepdk-45nm/.postconditions.stamp 2-freepdk-45nm/outputs/.execstamp.adk 2-freepdk-45nm/outputs/.stamp.adk
4-brg-synopsys-dc-synthesis/.stamp:
	$(call cpdir-and-parameterize,4-brg-synopsys-dc-synthesis,../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-synopsys-dc-synthesis,4-brg-synopsys-dc-synthesis/.stamp)
endif

# collect inputs

ifeq ("$(wildcard 4-brg-synopsys-dc-synthesis/.prebuilt)","")
4-brg-synopsys-dc-synthesis/inputs/.stamp.adk: 4-brg-synopsys-dc-synthesis/.stamp 2-freepdk-45nm/outputs/.stamp.adk
	$(call symlink,4-brg-synopsys-dc-synthesis/inputs,adk,../../2-freepdk-45nm/outputs/adk,.stamp.adk)
endif

ifeq ("$(wildcard 4-brg-synopsys-dc-synthesis/.prebuilt)","")
4-brg-synopsys-dc-synthesis/inputs/.stamp.rtl: 4-brg-synopsys-dc-synthesis/.stamp 1-ece5745-block-gather/outputs/.stamp.rtl
	$(call symlink,4-brg-synopsys-dc-synthesis/inputs,rtl,../../1-ece5745-block-gather/outputs/rtl,.stamp.rtl)
endif

# execute

ifeq ("$(wildcard 4-brg-synopsys-dc-synthesis/.prebuilt)","")

define 4_brg_synopsys_dc_synthesis_commands_rule
	mkdir -p 4-brg-synopsys-dc-synthesis/outputs && set -o pipefail && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-synopsys-dc-synthesis && chmod +x .mflowgen/4-brg-synopsys-dc-synthesis/mflowgen-run && cp -f .mflowgen/4-brg-synopsys-dc-synthesis/mflowgen-run 4-brg-synopsys-dc-synthesis && if [[ -e .mflowgen/4-brg-synopsys-dc-synthesis/mflowgen-debug ]]; then chmod +x .mflowgen/4-brg-synopsys-dc-synthesis/mflowgen-debug && cp -f .mflowgen/4-brg-synopsys-dc-synthesis/mflowgen-debug 4-brg-synopsys-dc-synthesis; fi && if [[ -e .mflowgen/4-brg-synopsys-dc-synthesis/mflowgen-check-preconditions.py ]]; then chmod +x .mflowgen/4-brg-synopsys-dc-synthesis/mflowgen-check-preconditions.py && cp -f .mflowgen/4-brg-synopsys-dc-synthesis/mflowgen-check-preconditions.py 4-brg-synopsys-dc-synthesis; fi && if [[ -e .mflowgen/4-brg-synopsys-dc-synthesis/mflowgen-check-postconditions.py ]]; then chmod +x .mflowgen/4-brg-synopsys-dc-synthesis/mflowgen-check-postconditions.py && cp -f .mflowgen/4-brg-synopsys-dc-synthesis/mflowgen-check-postconditions.py 4-brg-synopsys-dc-synthesis; fi && cd 4-brg-synopsys-dc-synthesis && if [[ -e mflowgen-check-preconditions.py ]]; then ./mflowgen-check-preconditions.py || exit 1; fi && ./mflowgen-run 2>&1 | tee mflowgen-run.log || exit 1 && cd .. && touch -c 4-brg-synopsys-dc-synthesis/outputs/*
endef

4-brg-synopsys-dc-synthesis/.execstamp: 4-brg-synopsys-dc-synthesis/.stamp 4-brg-synopsys-dc-synthesis/inputs/.stamp.adk 4-brg-synopsys-dc-synthesis/inputs/.stamp.rtl
	$(call 4_brg_synopsys_dc_synthesis_commands_rule)
	touch $@

4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v: 4-brg-synopsys-dc-synthesis/.execstamp
	touch $@
4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v: 4-brg-synopsys-dc-synthesis/.execstamp
	touch $@
4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc: 4-brg-synopsys-dc-synthesis/.execstamp
	touch $@
4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap: 4-brg-synopsys-dc-synthesis/.execstamp
	touch $@
4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf: 4-brg-synopsys-dc-synthesis/.execstamp
	touch $@
4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz: 4-brg-synopsys-dc-synthesis/.execstamp
	touch $@
4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt: 4-brg-synopsys-dc-synthesis/.execstamp
	touch $@

endif

# collect outputs

4-brg-synopsys-dc-synthesis/outputs/.stamp.design.v: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt
	$(call stamp,4-brg-synopsys-dc-synthesis/outputs/.stamp.design.v)

4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt
	$(call stamp,4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v)

4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt
	$(call stamp,4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc)

4-brg-synopsys-dc-synthesis/outputs/.stamp.design.namemap: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt
	$(call stamp,4-brg-synopsys-dc-synthesis/outputs/.stamp.design.namemap)

4-brg-synopsys-dc-synthesis/outputs/.stamp.design.svf: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt
	$(call stamp,4-brg-synopsys-dc-synthesis/outputs/.stamp.design.svf)

4-brg-synopsys-dc-synthesis/outputs/.stamp.design.spef.gz: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt
	$(call stamp,4-brg-synopsys-dc-synthesis/outputs/.stamp.design.spef.gz)

4-brg-synopsys-dc-synthesis/outputs/.stamp.synth.summary.txt: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt
	$(call stamp,4-brg-synopsys-dc-synthesis/outputs/.stamp.synth.summary.txt)

# post-conditions

define 4_brg_synopsys_dc_synthesis_post_conditions_commands_rule
	cd 4-brg-synopsys-dc-synthesis && if [[ -e mflowgen-check-postconditions.py ]]; then ./mflowgen-check-postconditions.py || exit 1; fi && cd ..
endef

4-brg-synopsys-dc-synthesis/.postconditions.stamp: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.synth.summary.txt
	$(call 4_brg_synopsys_dc_synthesis_post_conditions_commands_rule)
	touch $@

# alias

.PHONY: brg-synopsys-dc-synthesis

brg-synopsys-dc-synthesis: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/.postconditions.stamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.synth.summary.txt

.PHONY: 4

4: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/.postconditions.stamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.synth.summary.txt

# debug

define 4_debug_rule
	cd 4-brg-synopsys-dc-synthesis && ./mflowgen-debug 2>&1 | tee mflowgen-debug.log
endef

debug-brg-synopsys-dc-synthesis: 
	$(call 4_debug_rule)

.PHONY: debug-4

debug-4: debug-brg-synopsys-dc-synthesis

# ------------------------------------------------------------------------
# brg-cadence-innovus-init
# ------------------------------------------------------------------------

# build dir

ifeq ("$(wildcard 5-brg-cadence-innovus-init/.prebuilt)","")
5-brg-cadence-innovus-init/.stamp: 2-freepdk-45nm/.execstamp 2-freepdk-45nm/.postconditions.stamp 2-freepdk-45nm/outputs/.execstamp.adk 2-freepdk-45nm/outputs/.stamp.adk
5-brg-cadence-innovus-init/.stamp: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/.postconditions.stamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.synth.summary.txt
5-brg-cadence-innovus-init/.stamp:
	$(call cpdir-and-parameterize,5-brg-cadence-innovus-init,../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-cadence-innovus-init,5-brg-cadence-innovus-init/.stamp)
endif

# collect inputs

ifeq ("$(wildcard 5-brg-cadence-innovus-init/.prebuilt)","")
5-brg-cadence-innovus-init/inputs/.stamp.adk: 5-brg-cadence-innovus-init/.stamp 2-freepdk-45nm/outputs/.stamp.adk
	$(call symlink,5-brg-cadence-innovus-init/inputs,adk,../../2-freepdk-45nm/outputs/adk,.stamp.adk)
endif

ifeq ("$(wildcard 5-brg-cadence-innovus-init/.prebuilt)","")
5-brg-cadence-innovus-init/inputs/.stamp.design.sdc: 5-brg-cadence-innovus-init/.stamp 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc
	$(call symlink,5-brg-cadence-innovus-init/inputs,design.sdc,../../4-brg-synopsys-dc-synthesis/outputs/design.sdc,.stamp.design.sdc)
endif

ifeq ("$(wildcard 5-brg-cadence-innovus-init/.prebuilt)","")
5-brg-cadence-innovus-init/inputs/.stamp.design.v: 5-brg-cadence-innovus-init/.stamp 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.v
	$(call symlink,5-brg-cadence-innovus-init/inputs,design.v,../../4-brg-synopsys-dc-synthesis/outputs/design.v,.stamp.design.v)
endif

# execute

ifeq ("$(wildcard 5-brg-cadence-innovus-init/.prebuilt)","")

define 5_brg_cadence_innovus_init_commands_rule
	mkdir -p 5-brg-cadence-innovus-init/outputs && set -o pipefail && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-cadence-innovus-init && chmod +x .mflowgen/5-brg-cadence-innovus-init/mflowgen-run && cp -f .mflowgen/5-brg-cadence-innovus-init/mflowgen-run 5-brg-cadence-innovus-init && if [[ -e .mflowgen/5-brg-cadence-innovus-init/mflowgen-debug ]]; then chmod +x .mflowgen/5-brg-cadence-innovus-init/mflowgen-debug && cp -f .mflowgen/5-brg-cadence-innovus-init/mflowgen-debug 5-brg-cadence-innovus-init; fi && if [[ -e .mflowgen/5-brg-cadence-innovus-init/mflowgen-check-preconditions.py ]]; then chmod +x .mflowgen/5-brg-cadence-innovus-init/mflowgen-check-preconditions.py && cp -f .mflowgen/5-brg-cadence-innovus-init/mflowgen-check-preconditions.py 5-brg-cadence-innovus-init; fi && if [[ -e .mflowgen/5-brg-cadence-innovus-init/mflowgen-check-postconditions.py ]]; then chmod +x .mflowgen/5-brg-cadence-innovus-init/mflowgen-check-postconditions.py && cp -f .mflowgen/5-brg-cadence-innovus-init/mflowgen-check-postconditions.py 5-brg-cadence-innovus-init; fi && cd 5-brg-cadence-innovus-init && if [[ -e mflowgen-check-preconditions.py ]]; then ./mflowgen-check-preconditions.py || exit 1; fi && ./mflowgen-run 2>&1 | tee mflowgen-run.log || exit 1 && cd .. && touch -c 5-brg-cadence-innovus-init/outputs/*
endef

5-brg-cadence-innovus-init/.execstamp: 5-brg-cadence-innovus-init/.stamp 5-brg-cadence-innovus-init/inputs/.stamp.adk 5-brg-cadence-innovus-init/inputs/.stamp.design.sdc 5-brg-cadence-innovus-init/inputs/.stamp.design.v
	$(call 5_brg_cadence_innovus_init_commands_rule)
	touch $@

5-brg-cadence-innovus-init/outputs/.execstamp.design.checkpoint: 5-brg-cadence-innovus-init/.execstamp
	touch $@

endif

# collect outputs

5-brg-cadence-innovus-init/outputs/.stamp.design.checkpoint: 5-brg-cadence-innovus-init/.execstamp 5-brg-cadence-innovus-init/outputs/.execstamp.design.checkpoint
	$(call stamp,5-brg-cadence-innovus-init/outputs/.stamp.design.checkpoint)

# post-conditions

define 5_brg_cadence_innovus_init_post_conditions_commands_rule
	cd 5-brg-cadence-innovus-init && if [[ -e mflowgen-check-postconditions.py ]]; then ./mflowgen-check-postconditions.py || exit 1; fi && cd ..
endef

5-brg-cadence-innovus-init/.postconditions.stamp: 5-brg-cadence-innovus-init/.execstamp 5-brg-cadence-innovus-init/outputs/.execstamp.design.checkpoint 5-brg-cadence-innovus-init/outputs/.stamp.design.checkpoint
	$(call 5_brg_cadence_innovus_init_post_conditions_commands_rule)
	touch $@

# alias

.PHONY: brg-cadence-innovus-init

brg-cadence-innovus-init: 5-brg-cadence-innovus-init/.execstamp 5-brg-cadence-innovus-init/.postconditions.stamp 5-brg-cadence-innovus-init/outputs/.execstamp.design.checkpoint 5-brg-cadence-innovus-init/outputs/.stamp.design.checkpoint

.PHONY: 5

5: 5-brg-cadence-innovus-init/.execstamp 5-brg-cadence-innovus-init/.postconditions.stamp 5-brg-cadence-innovus-init/outputs/.execstamp.design.checkpoint 5-brg-cadence-innovus-init/outputs/.stamp.design.checkpoint

# debug

# ------------------------------------------------------------------------
# post-synth-gate-level-simulation
# ------------------------------------------------------------------------

# build dir

ifeq ("$(wildcard 6-post-synth-gate-level-simulation/.prebuilt)","")
6-post-synth-gate-level-simulation/.stamp: 1-ece5745-block-gather/.execstamp 1-ece5745-block-gather/.postconditions.stamp 1-ece5745-block-gather/outputs/.execstamp.rtl 1-ece5745-block-gather/outputs/.execstamp.testbenches 1-ece5745-block-gather/outputs/.stamp.rtl 1-ece5745-block-gather/outputs/.stamp.testbenches
6-post-synth-gate-level-simulation/.stamp: 2-freepdk-45nm/.execstamp 2-freepdk-45nm/.postconditions.stamp 2-freepdk-45nm/outputs/.execstamp.adk 2-freepdk-45nm/outputs/.stamp.adk
6-post-synth-gate-level-simulation/.stamp: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/.postconditions.stamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.synth.summary.txt
6-post-synth-gate-level-simulation/.stamp:
	$(call cpdir-and-parameterize,6-post-synth-gate-level-simulation,../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-synopsys-vcs-sim,6-post-synth-gate-level-simulation/.stamp)
endif

# collect inputs

ifeq ("$(wildcard 6-post-synth-gate-level-simulation/.prebuilt)","")
6-post-synth-gate-level-simulation/inputs/.stamp.adk: 6-post-synth-gate-level-simulation/.stamp 2-freepdk-45nm/outputs/.stamp.adk
	$(call symlink,6-post-synth-gate-level-simulation/inputs,adk,../../2-freepdk-45nm/outputs/adk,.stamp.adk)
endif

ifeq ("$(wildcard 6-post-synth-gate-level-simulation/.prebuilt)","")
6-post-synth-gate-level-simulation/inputs/.stamp.design.vcs.v: 6-post-synth-gate-level-simulation/.stamp 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v
	$(call symlink,6-post-synth-gate-level-simulation/inputs,design.vcs.v,../../4-brg-synopsys-dc-synthesis/outputs/design.vcs.v,.stamp.design.vcs.v)
endif

ifeq ("$(wildcard 6-post-synth-gate-level-simulation/.prebuilt)","")
6-post-synth-gate-level-simulation/inputs/.stamp.rtl: 6-post-synth-gate-level-simulation/.stamp 1-ece5745-block-gather/outputs/.stamp.rtl
	$(call symlink,6-post-synth-gate-level-simulation/inputs,rtl,../../1-ece5745-block-gather/outputs/rtl,.stamp.rtl)
endif

ifeq ("$(wildcard 6-post-synth-gate-level-simulation/.prebuilt)","")
6-post-synth-gate-level-simulation/inputs/.stamp.testbenches: 6-post-synth-gate-level-simulation/.stamp 1-ece5745-block-gather/outputs/.stamp.testbenches
	$(call symlink,6-post-synth-gate-level-simulation/inputs,testbenches,../../1-ece5745-block-gather/outputs/testbenches,.stamp.testbenches)
endif

# execute

ifeq ("$(wildcard 6-post-synth-gate-level-simulation/.prebuilt)","")

define 6_post_synth_gate_level_simulation_commands_rule
	mkdir -p 6-post-synth-gate-level-simulation/outputs && set -o pipefail && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t post-synth-gate-level-simulation && chmod +x .mflowgen/6-post-synth-gate-level-simulation/mflowgen-run && cp -f .mflowgen/6-post-synth-gate-level-simulation/mflowgen-run 6-post-synth-gate-level-simulation && if [[ -e .mflowgen/6-post-synth-gate-level-simulation/mflowgen-debug ]]; then chmod +x .mflowgen/6-post-synth-gate-level-simulation/mflowgen-debug && cp -f .mflowgen/6-post-synth-gate-level-simulation/mflowgen-debug 6-post-synth-gate-level-simulation; fi && if [[ -e .mflowgen/6-post-synth-gate-level-simulation/mflowgen-check-preconditions.py ]]; then chmod +x .mflowgen/6-post-synth-gate-level-simulation/mflowgen-check-preconditions.py && cp -f .mflowgen/6-post-synth-gate-level-simulation/mflowgen-check-preconditions.py 6-post-synth-gate-level-simulation; fi && if [[ -e .mflowgen/6-post-synth-gate-level-simulation/mflowgen-check-postconditions.py ]]; then chmod +x .mflowgen/6-post-synth-gate-level-simulation/mflowgen-check-postconditions.py && cp -f .mflowgen/6-post-synth-gate-level-simulation/mflowgen-check-postconditions.py 6-post-synth-gate-level-simulation; fi && cd 6-post-synth-gate-level-simulation && if [[ -e mflowgen-check-preconditions.py ]]; then ./mflowgen-check-preconditions.py || exit 1; fi && ./mflowgen-run 2>&1 | tee mflowgen-run.log || exit 1 && cd .. && touch -c 6-post-synth-gate-level-simulation/outputs/*
endef

6-post-synth-gate-level-simulation/.execstamp: 6-post-synth-gate-level-simulation/.stamp 6-post-synth-gate-level-simulation/inputs/.stamp.adk 6-post-synth-gate-level-simulation/inputs/.stamp.design.vcs.v 6-post-synth-gate-level-simulation/inputs/.stamp.rtl 6-post-synth-gate-level-simulation/inputs/.stamp.testbenches
	$(call 6_post_synth_gate_level_simulation_commands_rule)
	touch $@

6-post-synth-gate-level-simulation/outputs/.execstamp.vpd: 6-post-synth-gate-level-simulation/.execstamp
	touch $@
6-post-synth-gate-level-simulation/outputs/.execstamp.vcd: 6-post-synth-gate-level-simulation/.execstamp
	touch $@
6-post-synth-gate-level-simulation/outputs/.execstamp.saif: 6-post-synth-gate-level-simulation/.execstamp
	touch $@
6-post-synth-gate-level-simulation/outputs/.execstamp.sim.summary.txt: 6-post-synth-gate-level-simulation/.execstamp
	touch $@

endif

# collect outputs

6-post-synth-gate-level-simulation/outputs/.stamp.vpd: 6-post-synth-gate-level-simulation/.execstamp 6-post-synth-gate-level-simulation/outputs/.execstamp.saif 6-post-synth-gate-level-simulation/outputs/.execstamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.execstamp.vcd 6-post-synth-gate-level-simulation/outputs/.execstamp.vpd
	$(call stamp,6-post-synth-gate-level-simulation/outputs/.stamp.vpd)

6-post-synth-gate-level-simulation/outputs/.stamp.vcd: 6-post-synth-gate-level-simulation/.execstamp 6-post-synth-gate-level-simulation/outputs/.execstamp.saif 6-post-synth-gate-level-simulation/outputs/.execstamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.execstamp.vcd 6-post-synth-gate-level-simulation/outputs/.execstamp.vpd
	$(call stamp,6-post-synth-gate-level-simulation/outputs/.stamp.vcd)

6-post-synth-gate-level-simulation/outputs/.stamp.saif: 6-post-synth-gate-level-simulation/.execstamp 6-post-synth-gate-level-simulation/outputs/.execstamp.saif 6-post-synth-gate-level-simulation/outputs/.execstamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.execstamp.vcd 6-post-synth-gate-level-simulation/outputs/.execstamp.vpd
	$(call stamp,6-post-synth-gate-level-simulation/outputs/.stamp.saif)

6-post-synth-gate-level-simulation/outputs/.stamp.sim.summary.txt: 6-post-synth-gate-level-simulation/.execstamp 6-post-synth-gate-level-simulation/outputs/.execstamp.saif 6-post-synth-gate-level-simulation/outputs/.execstamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.execstamp.vcd 6-post-synth-gate-level-simulation/outputs/.execstamp.vpd
	$(call stamp,6-post-synth-gate-level-simulation/outputs/.stamp.sim.summary.txt)

# post-conditions

define 6_post_synth_gate_level_simulation_post_conditions_commands_rule
	cd 6-post-synth-gate-level-simulation && if [[ -e mflowgen-check-postconditions.py ]]; then ./mflowgen-check-postconditions.py || exit 1; fi && cd ..
endef

6-post-synth-gate-level-simulation/.postconditions.stamp: 6-post-synth-gate-level-simulation/.execstamp 6-post-synth-gate-level-simulation/outputs/.execstamp.saif 6-post-synth-gate-level-simulation/outputs/.execstamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.execstamp.vcd 6-post-synth-gate-level-simulation/outputs/.execstamp.vpd 6-post-synth-gate-level-simulation/outputs/.stamp.saif 6-post-synth-gate-level-simulation/outputs/.stamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.stamp.vcd 6-post-synth-gate-level-simulation/outputs/.stamp.vpd
	$(call 6_post_synth_gate_level_simulation_post_conditions_commands_rule)
	touch $@

# alias

.PHONY: post-synth-gate-level-simulation

post-synth-gate-level-simulation: 6-post-synth-gate-level-simulation/.execstamp 6-post-synth-gate-level-simulation/.postconditions.stamp 6-post-synth-gate-level-simulation/outputs/.execstamp.saif 6-post-synth-gate-level-simulation/outputs/.execstamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.execstamp.vcd 6-post-synth-gate-level-simulation/outputs/.execstamp.vpd 6-post-synth-gate-level-simulation/outputs/.stamp.saif 6-post-synth-gate-level-simulation/outputs/.stamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.stamp.vcd 6-post-synth-gate-level-simulation/outputs/.stamp.vpd

.PHONY: 6

6: 6-post-synth-gate-level-simulation/.execstamp 6-post-synth-gate-level-simulation/.postconditions.stamp 6-post-synth-gate-level-simulation/outputs/.execstamp.saif 6-post-synth-gate-level-simulation/outputs/.execstamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.execstamp.vcd 6-post-synth-gate-level-simulation/outputs/.execstamp.vpd 6-post-synth-gate-level-simulation/outputs/.stamp.saif 6-post-synth-gate-level-simulation/outputs/.stamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.stamp.vcd 6-post-synth-gate-level-simulation/outputs/.stamp.vpd

# debug

# ------------------------------------------------------------------------
# brg-cadence-innovus-blocksetup
# ------------------------------------------------------------------------

# build dir

ifeq ("$(wildcard 7-brg-cadence-innovus-blocksetup/.prebuilt)","")
7-brg-cadence-innovus-blocksetup/.stamp: 2-freepdk-45nm/.execstamp 2-freepdk-45nm/.postconditions.stamp 2-freepdk-45nm/outputs/.execstamp.adk 2-freepdk-45nm/outputs/.stamp.adk
7-brg-cadence-innovus-blocksetup/.stamp: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/.postconditions.stamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.synth.summary.txt
7-brg-cadence-innovus-blocksetup/.stamp: 5-brg-cadence-innovus-init/.execstamp 5-brg-cadence-innovus-init/.postconditions.stamp 5-brg-cadence-innovus-init/outputs/.execstamp.design.checkpoint 5-brg-cadence-innovus-init/outputs/.stamp.design.checkpoint
7-brg-cadence-innovus-blocksetup/.stamp:
	$(call cpdir-and-parameterize,7-brg-cadence-innovus-blocksetup,../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-cadence-innovus-blocksetup,7-brg-cadence-innovus-blocksetup/.stamp)
endif

# collect inputs

ifeq ("$(wildcard 7-brg-cadence-innovus-blocksetup/.prebuilt)","")
7-brg-cadence-innovus-blocksetup/inputs/.stamp.adk: 7-brg-cadence-innovus-blocksetup/.stamp 2-freepdk-45nm/outputs/.stamp.adk
	$(call symlink,7-brg-cadence-innovus-blocksetup/inputs,adk,../../2-freepdk-45nm/outputs/adk,.stamp.adk)
endif

ifeq ("$(wildcard 7-brg-cadence-innovus-blocksetup/.prebuilt)","")
7-brg-cadence-innovus-blocksetup/inputs/.stamp.design.checkpoint: 7-brg-cadence-innovus-blocksetup/.stamp 5-brg-cadence-innovus-init/outputs/.stamp.design.checkpoint
	$(call symlink,7-brg-cadence-innovus-blocksetup/inputs,design.checkpoint,../../5-brg-cadence-innovus-init/outputs/design.checkpoint,.stamp.design.checkpoint)
endif

ifeq ("$(wildcard 7-brg-cadence-innovus-blocksetup/.prebuilt)","")
7-brg-cadence-innovus-blocksetup/inputs/.stamp.design.sdc: 7-brg-cadence-innovus-blocksetup/.stamp 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc
	$(call symlink,7-brg-cadence-innovus-blocksetup/inputs,design.sdc,../../4-brg-synopsys-dc-synthesis/outputs/design.sdc,.stamp.design.sdc)
endif

# execute

ifeq ("$(wildcard 7-brg-cadence-innovus-blocksetup/.prebuilt)","")

define 7_brg_cadence_innovus_blocksetup_commands_rule
	mkdir -p 7-brg-cadence-innovus-blocksetup/outputs && set -o pipefail && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-cadence-innovus-blocksetup && chmod +x .mflowgen/7-brg-cadence-innovus-blocksetup/mflowgen-run && cp -f .mflowgen/7-brg-cadence-innovus-blocksetup/mflowgen-run 7-brg-cadence-innovus-blocksetup && if [[ -e .mflowgen/7-brg-cadence-innovus-blocksetup/mflowgen-debug ]]; then chmod +x .mflowgen/7-brg-cadence-innovus-blocksetup/mflowgen-debug && cp -f .mflowgen/7-brg-cadence-innovus-blocksetup/mflowgen-debug 7-brg-cadence-innovus-blocksetup; fi && if [[ -e .mflowgen/7-brg-cadence-innovus-blocksetup/mflowgen-check-preconditions.py ]]; then chmod +x .mflowgen/7-brg-cadence-innovus-blocksetup/mflowgen-check-preconditions.py && cp -f .mflowgen/7-brg-cadence-innovus-blocksetup/mflowgen-check-preconditions.py 7-brg-cadence-innovus-blocksetup; fi && if [[ -e .mflowgen/7-brg-cadence-innovus-blocksetup/mflowgen-check-postconditions.py ]]; then chmod +x .mflowgen/7-brg-cadence-innovus-blocksetup/mflowgen-check-postconditions.py && cp -f .mflowgen/7-brg-cadence-innovus-blocksetup/mflowgen-check-postconditions.py 7-brg-cadence-innovus-blocksetup; fi && cd 7-brg-cadence-innovus-blocksetup && if [[ -e mflowgen-check-preconditions.py ]]; then ./mflowgen-check-preconditions.py || exit 1; fi && ./mflowgen-run 2>&1 | tee mflowgen-run.log || exit 1 && cd .. && touch -c 7-brg-cadence-innovus-blocksetup/outputs/*
endef

7-brg-cadence-innovus-blocksetup/.execstamp: 7-brg-cadence-innovus-blocksetup/.stamp 7-brg-cadence-innovus-blocksetup/inputs/.stamp.adk 7-brg-cadence-innovus-blocksetup/inputs/.stamp.design.checkpoint 7-brg-cadence-innovus-blocksetup/inputs/.stamp.design.sdc
	$(call 7_brg_cadence_innovus_blocksetup_commands_rule)
	touch $@

7-brg-cadence-innovus-blocksetup/outputs/.execstamp.design.checkpoint: 7-brg-cadence-innovus-blocksetup/.execstamp
	touch $@

endif

# collect outputs

7-brg-cadence-innovus-blocksetup/outputs/.stamp.design.checkpoint: 7-brg-cadence-innovus-blocksetup/.execstamp 7-brg-cadence-innovus-blocksetup/outputs/.execstamp.design.checkpoint
	$(call stamp,7-brg-cadence-innovus-blocksetup/outputs/.stamp.design.checkpoint)

# post-conditions

define 7_brg_cadence_innovus_blocksetup_post_conditions_commands_rule
	cd 7-brg-cadence-innovus-blocksetup && if [[ -e mflowgen-check-postconditions.py ]]; then ./mflowgen-check-postconditions.py || exit 1; fi && cd ..
endef

7-brg-cadence-innovus-blocksetup/.postconditions.stamp: 7-brg-cadence-innovus-blocksetup/.execstamp 7-brg-cadence-innovus-blocksetup/outputs/.execstamp.design.checkpoint 7-brg-cadence-innovus-blocksetup/outputs/.stamp.design.checkpoint
	$(call 7_brg_cadence_innovus_blocksetup_post_conditions_commands_rule)
	touch $@

# alias

.PHONY: brg-cadence-innovus-blocksetup

brg-cadence-innovus-blocksetup: 7-brg-cadence-innovus-blocksetup/.execstamp 7-brg-cadence-innovus-blocksetup/.postconditions.stamp 7-brg-cadence-innovus-blocksetup/outputs/.execstamp.design.checkpoint 7-brg-cadence-innovus-blocksetup/outputs/.stamp.design.checkpoint

.PHONY: 7

7: 7-brg-cadence-innovus-blocksetup/.execstamp 7-brg-cadence-innovus-blocksetup/.postconditions.stamp 7-brg-cadence-innovus-blocksetup/outputs/.execstamp.design.checkpoint 7-brg-cadence-innovus-blocksetup/outputs/.stamp.design.checkpoint

# debug

# ------------------------------------------------------------------------
# post-synth-power-analysis
# ------------------------------------------------------------------------

# build dir

ifeq ("$(wildcard 8-post-synth-power-analysis/.prebuilt)","")
8-post-synth-power-analysis/.stamp: 2-freepdk-45nm/.execstamp 2-freepdk-45nm/.postconditions.stamp 2-freepdk-45nm/outputs/.execstamp.adk 2-freepdk-45nm/outputs/.stamp.adk
8-post-synth-power-analysis/.stamp: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/.postconditions.stamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.synth.summary.txt
8-post-synth-power-analysis/.stamp: 6-post-synth-gate-level-simulation/.execstamp 6-post-synth-gate-level-simulation/.postconditions.stamp 6-post-synth-gate-level-simulation/outputs/.execstamp.saif 6-post-synth-gate-level-simulation/outputs/.execstamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.execstamp.vcd 6-post-synth-gate-level-simulation/outputs/.execstamp.vpd 6-post-synth-gate-level-simulation/outputs/.stamp.saif 6-post-synth-gate-level-simulation/outputs/.stamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.stamp.vcd 6-post-synth-gate-level-simulation/outputs/.stamp.vpd
8-post-synth-power-analysis/.stamp:
	$(call cpdir-and-parameterize,8-post-synth-power-analysis,../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-synopsys-pt-power,8-post-synth-power-analysis/.stamp)
endif

# collect inputs

ifeq ("$(wildcard 8-post-synth-power-analysis/.prebuilt)","")
8-post-synth-power-analysis/inputs/.stamp.adk: 8-post-synth-power-analysis/.stamp 2-freepdk-45nm/outputs/.stamp.adk
	$(call symlink,8-post-synth-power-analysis/inputs,adk,../../2-freepdk-45nm/outputs/adk,.stamp.adk)
endif

ifeq ("$(wildcard 8-post-synth-power-analysis/.prebuilt)","")
8-post-synth-power-analysis/inputs/.stamp.design.sdc: 8-post-synth-power-analysis/.stamp 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc
	$(call symlink,8-post-synth-power-analysis/inputs,design.sdc,../../4-brg-synopsys-dc-synthesis/outputs/design.sdc,.stamp.design.sdc)
endif

ifeq ("$(wildcard 8-post-synth-power-analysis/.prebuilt)","")
8-post-synth-power-analysis/inputs/.stamp.design.spef.gz: 8-post-synth-power-analysis/.stamp 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.spef.gz
	$(call symlink,8-post-synth-power-analysis/inputs,design.spef.gz,../../4-brg-synopsys-dc-synthesis/outputs/design.spef.gz,.stamp.design.spef.gz)
endif

ifeq ("$(wildcard 8-post-synth-power-analysis/.prebuilt)","")
8-post-synth-power-analysis/inputs/.stamp.design.vcs.v: 8-post-synth-power-analysis/.stamp 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v
	$(call symlink,8-post-synth-power-analysis/inputs,design.vcs.v,../../4-brg-synopsys-dc-synthesis/outputs/design.vcs.v,.stamp.design.vcs.v)
endif

ifeq ("$(wildcard 8-post-synth-power-analysis/.prebuilt)","")
8-post-synth-power-analysis/inputs/.stamp.saif: 8-post-synth-power-analysis/.stamp 6-post-synth-gate-level-simulation/outputs/.stamp.saif
	$(call symlink,8-post-synth-power-analysis/inputs,saif,../../6-post-synth-gate-level-simulation/outputs/saif,.stamp.saif)
endif

ifeq ("$(wildcard 8-post-synth-power-analysis/.prebuilt)","")
8-post-synth-power-analysis/inputs/.stamp.vcd: 8-post-synth-power-analysis/.stamp 6-post-synth-gate-level-simulation/outputs/.stamp.vcd
	$(call symlink,8-post-synth-power-analysis/inputs,vcd,../../6-post-synth-gate-level-simulation/outputs/vcd,.stamp.vcd)
endif

# execute

ifeq ("$(wildcard 8-post-synth-power-analysis/.prebuilt)","")

define 8_post_synth_power_analysis_commands_rule
	mkdir -p 8-post-synth-power-analysis/outputs && set -o pipefail && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t post-synth-power-analysis && chmod +x .mflowgen/8-post-synth-power-analysis/mflowgen-run && cp -f .mflowgen/8-post-synth-power-analysis/mflowgen-run 8-post-synth-power-analysis && if [[ -e .mflowgen/8-post-synth-power-analysis/mflowgen-debug ]]; then chmod +x .mflowgen/8-post-synth-power-analysis/mflowgen-debug && cp -f .mflowgen/8-post-synth-power-analysis/mflowgen-debug 8-post-synth-power-analysis; fi && if [[ -e .mflowgen/8-post-synth-power-analysis/mflowgen-check-preconditions.py ]]; then chmod +x .mflowgen/8-post-synth-power-analysis/mflowgen-check-preconditions.py && cp -f .mflowgen/8-post-synth-power-analysis/mflowgen-check-preconditions.py 8-post-synth-power-analysis; fi && if [[ -e .mflowgen/8-post-synth-power-analysis/mflowgen-check-postconditions.py ]]; then chmod +x .mflowgen/8-post-synth-power-analysis/mflowgen-check-postconditions.py && cp -f .mflowgen/8-post-synth-power-analysis/mflowgen-check-postconditions.py 8-post-synth-power-analysis; fi && cd 8-post-synth-power-analysis && if [[ -e mflowgen-check-preconditions.py ]]; then ./mflowgen-check-preconditions.py || exit 1; fi && ./mflowgen-run 2>&1 | tee mflowgen-run.log || exit 1 && cd .. && touch -c 8-post-synth-power-analysis/outputs/*
endef

8-post-synth-power-analysis/.execstamp: 8-post-synth-power-analysis/.stamp 8-post-synth-power-analysis/inputs/.stamp.adk 8-post-synth-power-analysis/inputs/.stamp.design.sdc 8-post-synth-power-analysis/inputs/.stamp.design.spef.gz 8-post-synth-power-analysis/inputs/.stamp.design.vcs.v 8-post-synth-power-analysis/inputs/.stamp.saif 8-post-synth-power-analysis/inputs/.stamp.vcd
	$(call 8_post_synth_power_analysis_commands_rule)
	touch $@

8-post-synth-power-analysis/outputs/.execstamp.primetime.session: 8-post-synth-power-analysis/.execstamp
	touch $@
8-post-synth-power-analysis/outputs/.execstamp.design.sdf: 8-post-synth-power-analysis/.execstamp
	touch $@
8-post-synth-power-analysis/outputs/.execstamp.power.summary.txt: 8-post-synth-power-analysis/.execstamp
	touch $@

endif

# collect outputs

8-post-synth-power-analysis/outputs/.stamp.primetime.session: 8-post-synth-power-analysis/.execstamp 8-post-synth-power-analysis/outputs/.execstamp.design.sdf 8-post-synth-power-analysis/outputs/.execstamp.power.summary.txt 8-post-synth-power-analysis/outputs/.execstamp.primetime.session
	$(call stamp,8-post-synth-power-analysis/outputs/.stamp.primetime.session)

8-post-synth-power-analysis/outputs/.stamp.design.sdf: 8-post-synth-power-analysis/.execstamp 8-post-synth-power-analysis/outputs/.execstamp.design.sdf 8-post-synth-power-analysis/outputs/.execstamp.power.summary.txt 8-post-synth-power-analysis/outputs/.execstamp.primetime.session
	$(call stamp,8-post-synth-power-analysis/outputs/.stamp.design.sdf)

8-post-synth-power-analysis/outputs/.stamp.power.summary.txt: 8-post-synth-power-analysis/.execstamp 8-post-synth-power-analysis/outputs/.execstamp.design.sdf 8-post-synth-power-analysis/outputs/.execstamp.power.summary.txt 8-post-synth-power-analysis/outputs/.execstamp.primetime.session
	$(call stamp,8-post-synth-power-analysis/outputs/.stamp.power.summary.txt)

# post-conditions

define 8_post_synth_power_analysis_post_conditions_commands_rule
	cd 8-post-synth-power-analysis && if [[ -e mflowgen-check-postconditions.py ]]; then ./mflowgen-check-postconditions.py || exit 1; fi && cd ..
endef

8-post-synth-power-analysis/.postconditions.stamp: 8-post-synth-power-analysis/.execstamp 8-post-synth-power-analysis/outputs/.execstamp.design.sdf 8-post-synth-power-analysis/outputs/.execstamp.power.summary.txt 8-post-synth-power-analysis/outputs/.execstamp.primetime.session 8-post-synth-power-analysis/outputs/.stamp.design.sdf 8-post-synth-power-analysis/outputs/.stamp.power.summary.txt 8-post-synth-power-analysis/outputs/.stamp.primetime.session
	$(call 8_post_synth_power_analysis_post_conditions_commands_rule)
	touch $@

# alias

.PHONY: post-synth-power-analysis

post-synth-power-analysis: 8-post-synth-power-analysis/.execstamp 8-post-synth-power-analysis/.postconditions.stamp 8-post-synth-power-analysis/outputs/.execstamp.design.sdf 8-post-synth-power-analysis/outputs/.execstamp.power.summary.txt 8-post-synth-power-analysis/outputs/.execstamp.primetime.session 8-post-synth-power-analysis/outputs/.stamp.design.sdf 8-post-synth-power-analysis/outputs/.stamp.power.summary.txt 8-post-synth-power-analysis/outputs/.stamp.primetime.session

.PHONY: 8

8: 8-post-synth-power-analysis/.execstamp 8-post-synth-power-analysis/.postconditions.stamp 8-post-synth-power-analysis/outputs/.execstamp.design.sdf 8-post-synth-power-analysis/outputs/.execstamp.power.summary.txt 8-post-synth-power-analysis/outputs/.execstamp.primetime.session 8-post-synth-power-analysis/outputs/.stamp.design.sdf 8-post-synth-power-analysis/outputs/.stamp.power.summary.txt 8-post-synth-power-analysis/outputs/.stamp.primetime.session

# debug

define 8_debug_rule
	cd 8-post-synth-power-analysis && ./mflowgen-debug 2>&1 | tee mflowgen-debug.log
endef

debug-post-synth-power-analysis: 
	$(call 8_debug_rule)

.PHONY: debug-8

debug-8: debug-post-synth-power-analysis

# ------------------------------------------------------------------------
# brg-cadence-innovus-pnr
# ------------------------------------------------------------------------

# build dir

ifeq ("$(wildcard 9-brg-cadence-innovus-pnr/.prebuilt)","")
9-brg-cadence-innovus-pnr/.stamp: 2-freepdk-45nm/.execstamp 2-freepdk-45nm/.postconditions.stamp 2-freepdk-45nm/outputs/.execstamp.adk 2-freepdk-45nm/outputs/.stamp.adk
9-brg-cadence-innovus-pnr/.stamp: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/.postconditions.stamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.synth.summary.txt
9-brg-cadence-innovus-pnr/.stamp: 7-brg-cadence-innovus-blocksetup/.execstamp 7-brg-cadence-innovus-blocksetup/.postconditions.stamp 7-brg-cadence-innovus-blocksetup/outputs/.execstamp.design.checkpoint 7-brg-cadence-innovus-blocksetup/outputs/.stamp.design.checkpoint
9-brg-cadence-innovus-pnr/.stamp:
	$(call cpdir-and-parameterize,9-brg-cadence-innovus-pnr,../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-cadence-innovus-pnr,9-brg-cadence-innovus-pnr/.stamp)
endif

# collect inputs

ifeq ("$(wildcard 9-brg-cadence-innovus-pnr/.prebuilt)","")
9-brg-cadence-innovus-pnr/inputs/.stamp.adk: 9-brg-cadence-innovus-pnr/.stamp 2-freepdk-45nm/outputs/.stamp.adk
	$(call symlink,9-brg-cadence-innovus-pnr/inputs,adk,../../2-freepdk-45nm/outputs/adk,.stamp.adk)
endif

ifeq ("$(wildcard 9-brg-cadence-innovus-pnr/.prebuilt)","")
9-brg-cadence-innovus-pnr/inputs/.stamp.design.checkpoint: 9-brg-cadence-innovus-pnr/.stamp 7-brg-cadence-innovus-blocksetup/outputs/.stamp.design.checkpoint
	$(call symlink,9-brg-cadence-innovus-pnr/inputs,design.checkpoint,../../7-brg-cadence-innovus-blocksetup/outputs/design.checkpoint,.stamp.design.checkpoint)
endif

ifeq ("$(wildcard 9-brg-cadence-innovus-pnr/.prebuilt)","")
9-brg-cadence-innovus-pnr/inputs/.stamp.design.sdc: 9-brg-cadence-innovus-pnr/.stamp 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc
	$(call symlink,9-brg-cadence-innovus-pnr/inputs,design.sdc,../../4-brg-synopsys-dc-synthesis/outputs/design.sdc,.stamp.design.sdc)
endif

# execute

ifeq ("$(wildcard 9-brg-cadence-innovus-pnr/.prebuilt)","")

define 9_brg_cadence_innovus_pnr_commands_rule
	mkdir -p 9-brg-cadence-innovus-pnr/outputs && set -o pipefail && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-cadence-innovus-pnr && chmod +x .mflowgen/9-brg-cadence-innovus-pnr/mflowgen-run && cp -f .mflowgen/9-brg-cadence-innovus-pnr/mflowgen-run 9-brg-cadence-innovus-pnr && if [[ -e .mflowgen/9-brg-cadence-innovus-pnr/mflowgen-debug ]]; then chmod +x .mflowgen/9-brg-cadence-innovus-pnr/mflowgen-debug && cp -f .mflowgen/9-brg-cadence-innovus-pnr/mflowgen-debug 9-brg-cadence-innovus-pnr; fi && if [[ -e .mflowgen/9-brg-cadence-innovus-pnr/mflowgen-check-preconditions.py ]]; then chmod +x .mflowgen/9-brg-cadence-innovus-pnr/mflowgen-check-preconditions.py && cp -f .mflowgen/9-brg-cadence-innovus-pnr/mflowgen-check-preconditions.py 9-brg-cadence-innovus-pnr; fi && if [[ -e .mflowgen/9-brg-cadence-innovus-pnr/mflowgen-check-postconditions.py ]]; then chmod +x .mflowgen/9-brg-cadence-innovus-pnr/mflowgen-check-postconditions.py && cp -f .mflowgen/9-brg-cadence-innovus-pnr/mflowgen-check-postconditions.py 9-brg-cadence-innovus-pnr; fi && cd 9-brg-cadence-innovus-pnr && if [[ -e mflowgen-check-preconditions.py ]]; then ./mflowgen-check-preconditions.py || exit 1; fi && ./mflowgen-run 2>&1 | tee mflowgen-run.log || exit 1 && cd .. && touch -c 9-brg-cadence-innovus-pnr/outputs/*
endef

9-brg-cadence-innovus-pnr/.execstamp: 9-brg-cadence-innovus-pnr/.stamp 9-brg-cadence-innovus-pnr/inputs/.stamp.adk 9-brg-cadence-innovus-pnr/inputs/.stamp.design.checkpoint 9-brg-cadence-innovus-pnr/inputs/.stamp.design.sdc
	$(call 9_brg_cadence_innovus_pnr_commands_rule)
	touch $@

9-brg-cadence-innovus-pnr/outputs/.execstamp.design.checkpoint: 9-brg-cadence-innovus-pnr/.execstamp
	touch $@

endif

# collect outputs

9-brg-cadence-innovus-pnr/outputs/.stamp.design.checkpoint: 9-brg-cadence-innovus-pnr/.execstamp 9-brg-cadence-innovus-pnr/outputs/.execstamp.design.checkpoint
	$(call stamp,9-brg-cadence-innovus-pnr/outputs/.stamp.design.checkpoint)

# post-conditions

define 9_brg_cadence_innovus_pnr_post_conditions_commands_rule
	cd 9-brg-cadence-innovus-pnr && if [[ -e mflowgen-check-postconditions.py ]]; then ./mflowgen-check-postconditions.py || exit 1; fi && cd ..
endef

9-brg-cadence-innovus-pnr/.postconditions.stamp: 9-brg-cadence-innovus-pnr/.execstamp 9-brg-cadence-innovus-pnr/outputs/.execstamp.design.checkpoint 9-brg-cadence-innovus-pnr/outputs/.stamp.design.checkpoint
	$(call 9_brg_cadence_innovus_pnr_post_conditions_commands_rule)
	touch $@

# alias

.PHONY: brg-cadence-innovus-pnr

brg-cadence-innovus-pnr: 9-brg-cadence-innovus-pnr/.execstamp 9-brg-cadence-innovus-pnr/.postconditions.stamp 9-brg-cadence-innovus-pnr/outputs/.execstamp.design.checkpoint 9-brg-cadence-innovus-pnr/outputs/.stamp.design.checkpoint

.PHONY: 9

9: 9-brg-cadence-innovus-pnr/.execstamp 9-brg-cadence-innovus-pnr/.postconditions.stamp 9-brg-cadence-innovus-pnr/outputs/.execstamp.design.checkpoint 9-brg-cadence-innovus-pnr/outputs/.stamp.design.checkpoint

# debug

# ------------------------------------------------------------------------
# brg-synth-flow-summary
# ------------------------------------------------------------------------

# build dir

ifeq ("$(wildcard 10-brg-synth-flow-summary/.prebuilt)","")
10-brg-synth-flow-summary/.stamp: 3-brg-rtl-4-state-vcssim/.execstamp 3-brg-rtl-4-state-vcssim/.postconditions.stamp 3-brg-rtl-4-state-vcssim/outputs/.execstamp.saif 3-brg-rtl-4-state-vcssim/outputs/.execstamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vpd 3-brg-rtl-4-state-vcssim/outputs/.stamp.saif 3-brg-rtl-4-state-vcssim/outputs/.stamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.stamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.stamp.vpd
10-brg-synth-flow-summary/.stamp: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/.postconditions.stamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.synth.summary.txt
10-brg-synth-flow-summary/.stamp: 6-post-synth-gate-level-simulation/.execstamp 6-post-synth-gate-level-simulation/.postconditions.stamp 6-post-synth-gate-level-simulation/outputs/.execstamp.saif 6-post-synth-gate-level-simulation/outputs/.execstamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.execstamp.vcd 6-post-synth-gate-level-simulation/outputs/.execstamp.vpd 6-post-synth-gate-level-simulation/outputs/.stamp.saif 6-post-synth-gate-level-simulation/outputs/.stamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.stamp.vcd 6-post-synth-gate-level-simulation/outputs/.stamp.vpd
10-brg-synth-flow-summary/.stamp: 8-post-synth-power-analysis/.execstamp 8-post-synth-power-analysis/.postconditions.stamp 8-post-synth-power-analysis/outputs/.execstamp.design.sdf 8-post-synth-power-analysis/outputs/.execstamp.power.summary.txt 8-post-synth-power-analysis/outputs/.execstamp.primetime.session 8-post-synth-power-analysis/outputs/.stamp.design.sdf 8-post-synth-power-analysis/outputs/.stamp.power.summary.txt 8-post-synth-power-analysis/outputs/.stamp.primetime.session
10-brg-synth-flow-summary/.stamp:
	$(call cpdir-and-parameterize,10-brg-synth-flow-summary,../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-flow-summary,10-brg-synth-flow-summary/.stamp)
endif

# collect inputs

ifeq ("$(wildcard 10-brg-synth-flow-summary/.prebuilt)","")
10-brg-synth-flow-summary/inputs/.stamp.4state.summary.txt: 10-brg-synth-flow-summary/.stamp 3-brg-rtl-4-state-vcssim/outputs/.stamp.sim.summary.txt
	$(call symlink,10-brg-synth-flow-summary/inputs,4state.summary.txt,../../3-brg-rtl-4-state-vcssim/outputs/sim.summary.txt,.stamp.4state.summary.txt)
endif

ifeq ("$(wildcard 10-brg-synth-flow-summary/.prebuilt)","")
10-brg-synth-flow-summary/inputs/.stamp.ff.summary.txt: 10-brg-synth-flow-summary/.stamp 6-post-synth-gate-level-simulation/outputs/.stamp.sim.summary.txt
	$(call symlink,10-brg-synth-flow-summary/inputs,ff.summary.txt,../../6-post-synth-gate-level-simulation/outputs/sim.summary.txt,.stamp.ff.summary.txt)
endif

ifeq ("$(wildcard 10-brg-synth-flow-summary/.prebuilt)","")
10-brg-synth-flow-summary/inputs/.stamp.powerFF.summary.txt: 10-brg-synth-flow-summary/.stamp 8-post-synth-power-analysis/outputs/.stamp.power.summary.txt
	$(call symlink,10-brg-synth-flow-summary/inputs,powerFF.summary.txt,../../8-post-synth-power-analysis/outputs/power.summary.txt,.stamp.powerFF.summary.txt)
endif

ifeq ("$(wildcard 10-brg-synth-flow-summary/.prebuilt)","")
10-brg-synth-flow-summary/inputs/.stamp.synth.summary.txt: 10-brg-synth-flow-summary/.stamp 4-brg-synopsys-dc-synthesis/outputs/.stamp.synth.summary.txt
	$(call symlink,10-brg-synth-flow-summary/inputs,synth.summary.txt,../../4-brg-synopsys-dc-synthesis/outputs/synth.summary.txt,.stamp.synth.summary.txt)
endif

# execute

ifeq ("$(wildcard 10-brg-synth-flow-summary/.prebuilt)","")

define 10_brg_synth_flow_summary_commands_rule
	mkdir -p 10-brg-synth-flow-summary/outputs && set -o pipefail && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-synth-flow-summary && chmod +x .mflowgen/10-brg-synth-flow-summary/mflowgen-run && cp -f .mflowgen/10-brg-synth-flow-summary/mflowgen-run 10-brg-synth-flow-summary && if [[ -e .mflowgen/10-brg-synth-flow-summary/mflowgen-debug ]]; then chmod +x .mflowgen/10-brg-synth-flow-summary/mflowgen-debug && cp -f .mflowgen/10-brg-synth-flow-summary/mflowgen-debug 10-brg-synth-flow-summary; fi && if [[ -e .mflowgen/10-brg-synth-flow-summary/mflowgen-check-preconditions.py ]]; then chmod +x .mflowgen/10-brg-synth-flow-summary/mflowgen-check-preconditions.py && cp -f .mflowgen/10-brg-synth-flow-summary/mflowgen-check-preconditions.py 10-brg-synth-flow-summary; fi && if [[ -e .mflowgen/10-brg-synth-flow-summary/mflowgen-check-postconditions.py ]]; then chmod +x .mflowgen/10-brg-synth-flow-summary/mflowgen-check-postconditions.py && cp -f .mflowgen/10-brg-synth-flow-summary/mflowgen-check-postconditions.py 10-brg-synth-flow-summary; fi && cd 10-brg-synth-flow-summary && if [[ -e mflowgen-check-preconditions.py ]]; then ./mflowgen-check-preconditions.py || exit 1; fi && ./mflowgen-run 2>&1 | tee mflowgen-run.log || exit 1 && cd .. && touch -c 10-brg-synth-flow-summary/outputs/*
endef

10-brg-synth-flow-summary/.execstamp: 10-brg-synth-flow-summary/.stamp 10-brg-synth-flow-summary/inputs/.stamp.4state.summary.txt 10-brg-synth-flow-summary/inputs/.stamp.ff.summary.txt 10-brg-synth-flow-summary/inputs/.stamp.powerFF.summary.txt 10-brg-synth-flow-summary/inputs/.stamp.synth.summary.txt
	$(call 10_brg_synth_flow_summary_commands_rule)
	touch $@

10-brg-synth-flow-summary/outputs/.execstamp.flow.summary.rpt: 10-brg-synth-flow-summary/.execstamp
	touch $@

endif

# collect outputs

10-brg-synth-flow-summary/outputs/.stamp.flow.summary.rpt: 10-brg-synth-flow-summary/.execstamp 10-brg-synth-flow-summary/outputs/.execstamp.flow.summary.rpt
	$(call stamp,10-brg-synth-flow-summary/outputs/.stamp.flow.summary.rpt)

# post-conditions

define 10_brg_synth_flow_summary_post_conditions_commands_rule
	cd 10-brg-synth-flow-summary && if [[ -e mflowgen-check-postconditions.py ]]; then ./mflowgen-check-postconditions.py || exit 1; fi && cd ..
endef

10-brg-synth-flow-summary/.postconditions.stamp: 10-brg-synth-flow-summary/.execstamp 10-brg-synth-flow-summary/outputs/.execstamp.flow.summary.rpt 10-brg-synth-flow-summary/outputs/.stamp.flow.summary.rpt
	$(call 10_brg_synth_flow_summary_post_conditions_commands_rule)
	touch $@

# alias

.PHONY: brg-synth-flow-summary

brg-synth-flow-summary: 10-brg-synth-flow-summary/.execstamp 10-brg-synth-flow-summary/.postconditions.stamp 10-brg-synth-flow-summary/outputs/.execstamp.flow.summary.rpt 10-brg-synth-flow-summary/outputs/.stamp.flow.summary.rpt

.PHONY: 10

10: 10-brg-synth-flow-summary/.execstamp 10-brg-synth-flow-summary/.postconditions.stamp 10-brg-synth-flow-summary/outputs/.execstamp.flow.summary.rpt 10-brg-synth-flow-summary/outputs/.stamp.flow.summary.rpt

# debug

# ------------------------------------------------------------------------
# brg-cadence-innovus-signoff
# ------------------------------------------------------------------------

# build dir

ifeq ("$(wildcard 11-brg-cadence-innovus-signoff/.prebuilt)","")
11-brg-cadence-innovus-signoff/.stamp: 2-freepdk-45nm/.execstamp 2-freepdk-45nm/.postconditions.stamp 2-freepdk-45nm/outputs/.execstamp.adk 2-freepdk-45nm/outputs/.stamp.adk
11-brg-cadence-innovus-signoff/.stamp: 4-brg-synopsys-dc-synthesis/.execstamp 4-brg-synopsys-dc-synthesis/.postconditions.stamp 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.execstamp.synth.summary.txt 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.namemap 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.spef.gz 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.svf 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.vcs.v 4-brg-synopsys-dc-synthesis/outputs/.stamp.synth.summary.txt
11-brg-cadence-innovus-signoff/.stamp: 9-brg-cadence-innovus-pnr/.execstamp 9-brg-cadence-innovus-pnr/.postconditions.stamp 9-brg-cadence-innovus-pnr/outputs/.execstamp.design.checkpoint 9-brg-cadence-innovus-pnr/outputs/.stamp.design.checkpoint
11-brg-cadence-innovus-signoff/.stamp:
	$(call cpdir-and-parameterize,11-brg-cadence-innovus-signoff,../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-cadence-innovus-signoff,11-brg-cadence-innovus-signoff/.stamp)
endif

# collect inputs

ifeq ("$(wildcard 11-brg-cadence-innovus-signoff/.prebuilt)","")
11-brg-cadence-innovus-signoff/inputs/.stamp.adk: 11-brg-cadence-innovus-signoff/.stamp 2-freepdk-45nm/outputs/.stamp.adk
	$(call symlink,11-brg-cadence-innovus-signoff/inputs,adk,../../2-freepdk-45nm/outputs/adk,.stamp.adk)
endif

ifeq ("$(wildcard 11-brg-cadence-innovus-signoff/.prebuilt)","")
11-brg-cadence-innovus-signoff/inputs/.stamp.design.checkpoint: 11-brg-cadence-innovus-signoff/.stamp 9-brg-cadence-innovus-pnr/outputs/.stamp.design.checkpoint
	$(call symlink,11-brg-cadence-innovus-signoff/inputs,design.checkpoint,../../9-brg-cadence-innovus-pnr/outputs/design.checkpoint,.stamp.design.checkpoint)
endif

ifeq ("$(wildcard 11-brg-cadence-innovus-signoff/.prebuilt)","")
11-brg-cadence-innovus-signoff/inputs/.stamp.design.sdc: 11-brg-cadence-innovus-signoff/.stamp 4-brg-synopsys-dc-synthesis/outputs/.stamp.design.sdc
	$(call symlink,11-brg-cadence-innovus-signoff/inputs,design.sdc,../../4-brg-synopsys-dc-synthesis/outputs/design.sdc,.stamp.design.sdc)
endif

# execute

ifeq ("$(wildcard 11-brg-cadence-innovus-signoff/.prebuilt)","")

define 11_brg_cadence_innovus_signoff_commands_rule
	mkdir -p 11-brg-cadence-innovus-signoff/outputs && set -o pipefail && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-cadence-innovus-signoff && chmod +x .mflowgen/11-brg-cadence-innovus-signoff/mflowgen-run && cp -f .mflowgen/11-brg-cadence-innovus-signoff/mflowgen-run 11-brg-cadence-innovus-signoff && if [[ -e .mflowgen/11-brg-cadence-innovus-signoff/mflowgen-debug ]]; then chmod +x .mflowgen/11-brg-cadence-innovus-signoff/mflowgen-debug && cp -f .mflowgen/11-brg-cadence-innovus-signoff/mflowgen-debug 11-brg-cadence-innovus-signoff; fi && if [[ -e .mflowgen/11-brg-cadence-innovus-signoff/mflowgen-check-preconditions.py ]]; then chmod +x .mflowgen/11-brg-cadence-innovus-signoff/mflowgen-check-preconditions.py && cp -f .mflowgen/11-brg-cadence-innovus-signoff/mflowgen-check-preconditions.py 11-brg-cadence-innovus-signoff; fi && if [[ -e .mflowgen/11-brg-cadence-innovus-signoff/mflowgen-check-postconditions.py ]]; then chmod +x .mflowgen/11-brg-cadence-innovus-signoff/mflowgen-check-postconditions.py && cp -f .mflowgen/11-brg-cadence-innovus-signoff/mflowgen-check-postconditions.py 11-brg-cadence-innovus-signoff; fi && cd 11-brg-cadence-innovus-signoff && if [[ -e mflowgen-check-preconditions.py ]]; then ./mflowgen-check-preconditions.py || exit 1; fi && ./mflowgen-run 2>&1 | tee mflowgen-run.log || exit 1 && cd .. && touch -c 11-brg-cadence-innovus-signoff/outputs/*
endef

11-brg-cadence-innovus-signoff/.execstamp: 11-brg-cadence-innovus-signoff/.stamp 11-brg-cadence-innovus-signoff/inputs/.stamp.adk 11-brg-cadence-innovus-signoff/inputs/.stamp.design.checkpoint 11-brg-cadence-innovus-signoff/inputs/.stamp.design.sdc
	$(call 11_brg_cadence_innovus_signoff_commands_rule)
	touch $@

11-brg-cadence-innovus-signoff/outputs/.execstamp.design.checkpoint: 11-brg-cadence-innovus-signoff/.execstamp
	touch $@
11-brg-cadence-innovus-signoff/outputs/.execstamp.design.gds: 11-brg-cadence-innovus-signoff/.execstamp
	touch $@
11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lvs.v: 11-brg-cadence-innovus-signoff/.execstamp
	touch $@
11-brg-cadence-innovus-signoff/outputs/.execstamp.design.vcs.v: 11-brg-cadence-innovus-signoff/.execstamp
	touch $@
11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lef: 11-brg-cadence-innovus-signoff/.execstamp
	touch $@
11-brg-cadence-innovus-signoff/outputs/.execstamp.design.sdf: 11-brg-cadence-innovus-signoff/.execstamp
	touch $@
11-brg-cadence-innovus-signoff/outputs/.execstamp.design.spef.gz: 11-brg-cadence-innovus-signoff/.execstamp
	touch $@
11-brg-cadence-innovus-signoff/outputs/.execstamp.signoff.summary.txt: 11-brg-cadence-innovus-signoff/.execstamp
	touch $@

endif

# collect outputs

11-brg-cadence-innovus-signoff/outputs/.stamp.design.checkpoint: 11-brg-cadence-innovus-signoff/.execstamp 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.signoff.summary.txt
	$(call stamp,11-brg-cadence-innovus-signoff/outputs/.stamp.design.checkpoint)

11-brg-cadence-innovus-signoff/outputs/.stamp.design.gds: 11-brg-cadence-innovus-signoff/.execstamp 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.signoff.summary.txt
	$(call stamp,11-brg-cadence-innovus-signoff/outputs/.stamp.design.gds)

11-brg-cadence-innovus-signoff/outputs/.stamp.design.lvs.v: 11-brg-cadence-innovus-signoff/.execstamp 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.signoff.summary.txt
	$(call stamp,11-brg-cadence-innovus-signoff/outputs/.stamp.design.lvs.v)

11-brg-cadence-innovus-signoff/outputs/.stamp.design.vcs.v: 11-brg-cadence-innovus-signoff/.execstamp 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.signoff.summary.txt
	$(call stamp,11-brg-cadence-innovus-signoff/outputs/.stamp.design.vcs.v)

11-brg-cadence-innovus-signoff/outputs/.stamp.design.lef: 11-brg-cadence-innovus-signoff/.execstamp 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.signoff.summary.txt
	$(call stamp,11-brg-cadence-innovus-signoff/outputs/.stamp.design.lef)

11-brg-cadence-innovus-signoff/outputs/.stamp.design.sdf: 11-brg-cadence-innovus-signoff/.execstamp 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.signoff.summary.txt
	$(call stamp,11-brg-cadence-innovus-signoff/outputs/.stamp.design.sdf)

11-brg-cadence-innovus-signoff/outputs/.stamp.design.spef.gz: 11-brg-cadence-innovus-signoff/.execstamp 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.signoff.summary.txt
	$(call stamp,11-brg-cadence-innovus-signoff/outputs/.stamp.design.spef.gz)

11-brg-cadence-innovus-signoff/outputs/.stamp.signoff.summary.txt: 11-brg-cadence-innovus-signoff/.execstamp 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.signoff.summary.txt
	$(call stamp,11-brg-cadence-innovus-signoff/outputs/.stamp.signoff.summary.txt)

# post-conditions

define 11_brg_cadence_innovus_signoff_post_conditions_commands_rule
	cd 11-brg-cadence-innovus-signoff && if [[ -e mflowgen-check-postconditions.py ]]; then ./mflowgen-check-postconditions.py || exit 1; fi && cd ..
endef

11-brg-cadence-innovus-signoff/.postconditions.stamp: 11-brg-cadence-innovus-signoff/.execstamp 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.signoff.summary.txt 11-brg-cadence-innovus-signoff/outputs/.stamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.stamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.stamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.stamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.stamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.stamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.stamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.stamp.signoff.summary.txt
	$(call 11_brg_cadence_innovus_signoff_post_conditions_commands_rule)
	touch $@

# alias

.PHONY: brg-cadence-innovus-signoff

brg-cadence-innovus-signoff: 11-brg-cadence-innovus-signoff/.execstamp 11-brg-cadence-innovus-signoff/.postconditions.stamp 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.signoff.summary.txt 11-brg-cadence-innovus-signoff/outputs/.stamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.stamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.stamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.stamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.stamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.stamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.stamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.stamp.signoff.summary.txt

.PHONY: 11

11: 11-brg-cadence-innovus-signoff/.execstamp 11-brg-cadence-innovus-signoff/.postconditions.stamp 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.signoff.summary.txt 11-brg-cadence-innovus-signoff/outputs/.stamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.stamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.stamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.stamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.stamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.stamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.stamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.stamp.signoff.summary.txt

# debug

# ------------------------------------------------------------------------
# brg-flow-summary
# ------------------------------------------------------------------------

# build dir

ifeq ("$(wildcard 12-brg-flow-summary/.prebuilt)","")
12-brg-flow-summary/.stamp: 11-brg-cadence-innovus-signoff/.execstamp 11-brg-cadence-innovus-signoff/.postconditions.stamp 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.execstamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.execstamp.signoff.summary.txt 11-brg-cadence-innovus-signoff/outputs/.stamp.design.checkpoint 11-brg-cadence-innovus-signoff/outputs/.stamp.design.gds 11-brg-cadence-innovus-signoff/outputs/.stamp.design.lef 11-brg-cadence-innovus-signoff/outputs/.stamp.design.lvs.v 11-brg-cadence-innovus-signoff/outputs/.stamp.design.sdf 11-brg-cadence-innovus-signoff/outputs/.stamp.design.spef.gz 11-brg-cadence-innovus-signoff/outputs/.stamp.design.vcs.v 11-brg-cadence-innovus-signoff/outputs/.stamp.signoff.summary.txt
12-brg-flow-summary/.stamp: 3-brg-rtl-4-state-vcssim/.execstamp 3-brg-rtl-4-state-vcssim/.postconditions.stamp 3-brg-rtl-4-state-vcssim/outputs/.execstamp.saif 3-brg-rtl-4-state-vcssim/outputs/.execstamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.execstamp.vpd 3-brg-rtl-4-state-vcssim/outputs/.stamp.saif 3-brg-rtl-4-state-vcssim/outputs/.stamp.sim.summary.txt 3-brg-rtl-4-state-vcssim/outputs/.stamp.vcd 3-brg-rtl-4-state-vcssim/outputs/.stamp.vpd
12-brg-flow-summary/.stamp: 6-post-synth-gate-level-simulation/.execstamp 6-post-synth-gate-level-simulation/.postconditions.stamp 6-post-synth-gate-level-simulation/outputs/.execstamp.saif 6-post-synth-gate-level-simulation/outputs/.execstamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.execstamp.vcd 6-post-synth-gate-level-simulation/outputs/.execstamp.vpd 6-post-synth-gate-level-simulation/outputs/.stamp.saif 6-post-synth-gate-level-simulation/outputs/.stamp.sim.summary.txt 6-post-synth-gate-level-simulation/outputs/.stamp.vcd 6-post-synth-gate-level-simulation/outputs/.stamp.vpd
12-brg-flow-summary/.stamp: 8-post-synth-power-analysis/.execstamp 8-post-synth-power-analysis/.postconditions.stamp 8-post-synth-power-analysis/outputs/.execstamp.design.sdf 8-post-synth-power-analysis/outputs/.execstamp.power.summary.txt 8-post-synth-power-analysis/outputs/.execstamp.primetime.session 8-post-synth-power-analysis/outputs/.stamp.design.sdf 8-post-synth-power-analysis/outputs/.stamp.power.summary.txt 8-post-synth-power-analysis/outputs/.stamp.primetime.session
12-brg-flow-summary/.stamp:
	$(call cpdir-and-parameterize,12-brg-flow-summary,../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-flow-summary,12-brg-flow-summary/.stamp)
endif

# collect inputs

ifeq ("$(wildcard 12-brg-flow-summary/.prebuilt)","")
12-brg-flow-summary/inputs/.stamp.4state.summary.txt: 12-brg-flow-summary/.stamp 3-brg-rtl-4-state-vcssim/outputs/.stamp.sim.summary.txt
	$(call symlink,12-brg-flow-summary/inputs,4state.summary.txt,../../3-brg-rtl-4-state-vcssim/outputs/sim.summary.txt,.stamp.4state.summary.txt)
endif

ifeq ("$(wildcard 12-brg-flow-summary/.prebuilt)","")
12-brg-flow-summary/inputs/.stamp.ff.summary.txt: 12-brg-flow-summary/.stamp 6-post-synth-gate-level-simulation/outputs/.stamp.sim.summary.txt
	$(call symlink,12-brg-flow-summary/inputs,ff.summary.txt,../../6-post-synth-gate-level-simulation/outputs/sim.summary.txt,.stamp.ff.summary.txt)
endif

ifeq ("$(wildcard 12-brg-flow-summary/.prebuilt)","")
12-brg-flow-summary/inputs/.stamp.powerFF.summary.txt: 12-brg-flow-summary/.stamp 8-post-synth-power-analysis/outputs/.stamp.power.summary.txt
	$(call symlink,12-brg-flow-summary/inputs,powerFF.summary.txt,../../8-post-synth-power-analysis/outputs/power.summary.txt,.stamp.powerFF.summary.txt)
endif

ifeq ("$(wildcard 12-brg-flow-summary/.prebuilt)","")
12-brg-flow-summary/inputs/.stamp.signoff.summary.txt: 12-brg-flow-summary/.stamp 11-brg-cadence-innovus-signoff/outputs/.stamp.signoff.summary.txt
	$(call symlink,12-brg-flow-summary/inputs,signoff.summary.txt,../../11-brg-cadence-innovus-signoff/outputs/signoff.summary.txt,.stamp.signoff.summary.txt)
endif

# execute

ifeq ("$(wildcard 12-brg-flow-summary/.prebuilt)","")

define 12_brg_flow_summary_commands_rule
	mkdir -p 12-brg-flow-summary/outputs && set -o pipefail && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-flow-summary && chmod +x .mflowgen/12-brg-flow-summary/mflowgen-run && cp -f .mflowgen/12-brg-flow-summary/mflowgen-run 12-brg-flow-summary && if [[ -e .mflowgen/12-brg-flow-summary/mflowgen-debug ]]; then chmod +x .mflowgen/12-brg-flow-summary/mflowgen-debug && cp -f .mflowgen/12-brg-flow-summary/mflowgen-debug 12-brg-flow-summary; fi && if [[ -e .mflowgen/12-brg-flow-summary/mflowgen-check-preconditions.py ]]; then chmod +x .mflowgen/12-brg-flow-summary/mflowgen-check-preconditions.py && cp -f .mflowgen/12-brg-flow-summary/mflowgen-check-preconditions.py 12-brg-flow-summary; fi && if [[ -e .mflowgen/12-brg-flow-summary/mflowgen-check-postconditions.py ]]; then chmod +x .mflowgen/12-brg-flow-summary/mflowgen-check-postconditions.py && cp -f .mflowgen/12-brg-flow-summary/mflowgen-check-postconditions.py 12-brg-flow-summary; fi && cd 12-brg-flow-summary && if [[ -e mflowgen-check-preconditions.py ]]; then ./mflowgen-check-preconditions.py || exit 1; fi && ./mflowgen-run 2>&1 | tee mflowgen-run.log || exit 1 && cd .. && touch -c 12-brg-flow-summary/outputs/*
endef

12-brg-flow-summary/.execstamp: 12-brg-flow-summary/.stamp 12-brg-flow-summary/inputs/.stamp.4state.summary.txt 12-brg-flow-summary/inputs/.stamp.ff.summary.txt 12-brg-flow-summary/inputs/.stamp.powerFF.summary.txt 12-brg-flow-summary/inputs/.stamp.signoff.summary.txt
	$(call 12_brg_flow_summary_commands_rule)
	touch $@

12-brg-flow-summary/outputs/.execstamp.flow.summary.rpt: 12-brg-flow-summary/.execstamp
	touch $@

endif

# collect outputs

12-brg-flow-summary/outputs/.stamp.flow.summary.rpt: 12-brg-flow-summary/.execstamp 12-brg-flow-summary/outputs/.execstamp.flow.summary.rpt
	$(call stamp,12-brg-flow-summary/outputs/.stamp.flow.summary.rpt)

# post-conditions

define 12_brg_flow_summary_post_conditions_commands_rule
	cd 12-brg-flow-summary && if [[ -e mflowgen-check-postconditions.py ]]; then ./mflowgen-check-postconditions.py || exit 1; fi && cd ..
endef

12-brg-flow-summary/.postconditions.stamp: 12-brg-flow-summary/.execstamp 12-brg-flow-summary/outputs/.execstamp.flow.summary.rpt 12-brg-flow-summary/outputs/.stamp.flow.summary.rpt
	$(call 12_brg_flow_summary_post_conditions_commands_rule)
	touch $@

# alias

.PHONY: brg-flow-summary

brg-flow-summary: 12-brg-flow-summary/.execstamp 12-brg-flow-summary/.postconditions.stamp 12-brg-flow-summary/outputs/.execstamp.flow.summary.rpt 12-brg-flow-summary/outputs/.stamp.flow.summary.rpt

.PHONY: 12

12: 12-brg-flow-summary/.execstamp 12-brg-flow-summary/.postconditions.stamp 12-brg-flow-summary/outputs/.execstamp.flow.summary.rpt 12-brg-flow-summary/outputs/.stamp.flow.summary.rpt

# debug

# ------------------------------------------------------------------------
# Misc
# ------------------------------------------------------------------------

# Clean

.PHONY: clean-all

clean-all:
	@find . -maxdepth 1 ! -name Makefile ! -name .mflowgen\* ! -name \. ! -name \.\. -exec rm -rf {} +

.PHONY: clean-0

clean-0:
	rm -rf ./0-build-info

.PHONY: clean-build-info

clean-build-info: clean-0

.PHONY: clean-1

clean-1:
	rm -rf ./1-ece5745-block-gather

.PHONY: clean-ece5745-block-gather

clean-ece5745-block-gather: clean-1

.PHONY: clean-10

clean-10:
	rm -rf ./10-brg-synth-flow-summary

.PHONY: clean-brg-synth-flow-summary

clean-brg-synth-flow-summary: clean-10

.PHONY: clean-11

clean-11:
	rm -rf ./11-brg-cadence-innovus-signoff

.PHONY: clean-brg-cadence-innovus-signoff

clean-brg-cadence-innovus-signoff: clean-11

.PHONY: clean-12

clean-12:
	rm -rf ./12-brg-flow-summary

.PHONY: clean-brg-flow-summary

clean-brg-flow-summary: clean-12

.PHONY: clean-2

clean-2:
	rm -rf ./2-freepdk-45nm

.PHONY: clean-freepdk-45nm

clean-freepdk-45nm: clean-2

.PHONY: clean-3

clean-3:
	rm -rf ./3-brg-rtl-4-state-vcssim

.PHONY: clean-brg-rtl-4-state-vcssim

clean-brg-rtl-4-state-vcssim: clean-3

.PHONY: clean-4

clean-4:
	rm -rf ./4-brg-synopsys-dc-synthesis

.PHONY: clean-brg-synopsys-dc-synthesis

clean-brg-synopsys-dc-synthesis: clean-4

.PHONY: clean-5

clean-5:
	rm -rf ./5-brg-cadence-innovus-init

.PHONY: clean-brg-cadence-innovus-init

clean-brg-cadence-innovus-init: clean-5

.PHONY: clean-6

clean-6:
	rm -rf ./6-post-synth-gate-level-simulation

.PHONY: clean-post-synth-gate-level-simulation

clean-post-synth-gate-level-simulation: clean-6

.PHONY: clean-7

clean-7:
	rm -rf ./7-brg-cadence-innovus-blocksetup

.PHONY: clean-brg-cadence-innovus-blocksetup

clean-brg-cadence-innovus-blocksetup: clean-7

.PHONY: clean-8

clean-8:
	rm -rf ./8-post-synth-power-analysis

.PHONY: clean-post-synth-power-analysis

clean-post-synth-power-analysis: clean-8

.PHONY: clean-9

clean-9:
	rm -rf ./9-brg-cadence-innovus-pnr

.PHONY: clean-brg-cadence-innovus-pnr

clean-brg-cadence-innovus-pnr: clean-9

# Diff

.PHONY: diff-0

diff-0:
	@echo && diff -r -u --minimal --exclude={configure.yml,.time_end,.time_start,mflowgen-run*,mflowgen-debug,.stamp,inputs,outputs} ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/info 0-build-info | grep --color=always -e '^-.*' -e '$$' -e 'Only in ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/info.*' | GREP_COLOR='01;32' grep --color=always -e '^+.*' -e '$$' -e 'Only in 0-build-info.*' && echo || true

.PHONY: diff-1

diff-1:
	@echo && diff -r -u --minimal --exclude={configure.yml,.time_end,.time_start,mflowgen-run*,mflowgen-debug,.stamp,inputs,outputs} ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/ece5745-block-gather 1-ece5745-block-gather | grep --color=always -e '^-.*' -e '$$' -e 'Only in ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/ece5745-block-gather.*' | GREP_COLOR='01;32' grep --color=always -e '^+.*' -e '$$' -e 'Only in 1-ece5745-block-gather.*' && echo || true

.PHONY: diff-2

diff-2:
	@echo && diff -r -u --minimal --exclude={configure.yml,.time_end,.time_start,mflowgen-run*,mflowgen-debug,.stamp,inputs,outputs} ../../../../../../classes/ece5745/install/adk-pkgs/freepdk-45nm 2-freepdk-45nm | grep --color=always -e '^-.*' -e '$$' -e 'Only in ../../../../../../classes/ece5745/install/adk-pkgs/freepdk-45nm.*' | GREP_COLOR='01;32' grep --color=always -e '^+.*' -e '$$' -e 'Only in 2-freepdk-45nm.*' && echo || true

.PHONY: diff-3

diff-3:
	@echo && diff -r -u --minimal --exclude={configure.yml,.time_end,.time_start,mflowgen-run*,mflowgen-debug,.stamp,inputs,outputs} ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-synopsys-vcs-sim 3-brg-rtl-4-state-vcssim | grep --color=always -e '^-.*' -e '$$' -e 'Only in ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-synopsys-vcs-sim.*' | GREP_COLOR='01;32' grep --color=always -e '^+.*' -e '$$' -e 'Only in 3-brg-rtl-4-state-vcssim.*' && echo || true

.PHONY: diff-4

diff-4:
	@echo && diff -r -u --minimal --exclude={configure.yml,.time_end,.time_start,mflowgen-run*,mflowgen-debug,.stamp,inputs,outputs} ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-synopsys-dc-synthesis 4-brg-synopsys-dc-synthesis | grep --color=always -e '^-.*' -e '$$' -e 'Only in ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-synopsys-dc-synthesis.*' | GREP_COLOR='01;32' grep --color=always -e '^+.*' -e '$$' -e 'Only in 4-brg-synopsys-dc-synthesis.*' && echo || true

.PHONY: diff-5

diff-5:
	@echo && diff -r -u --minimal --exclude={configure.yml,.time_end,.time_start,mflowgen-run*,mflowgen-debug,.stamp,inputs,outputs} ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-cadence-innovus-init 5-brg-cadence-innovus-init | grep --color=always -e '^-.*' -e '$$' -e 'Only in ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-cadence-innovus-init.*' | GREP_COLOR='01;32' grep --color=always -e '^+.*' -e '$$' -e 'Only in 5-brg-cadence-innovus-init.*' && echo || true

.PHONY: diff-6

diff-6:
	@echo && diff -r -u --minimal --exclude={configure.yml,.time_end,.time_start,mflowgen-run*,mflowgen-debug,.stamp,inputs,outputs} ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-synopsys-vcs-sim 6-post-synth-gate-level-simulation | grep --color=always -e '^-.*' -e '$$' -e 'Only in ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-synopsys-vcs-sim.*' | GREP_COLOR='01;32' grep --color=always -e '^+.*' -e '$$' -e 'Only in 6-post-synth-gate-level-simulation.*' && echo || true

.PHONY: diff-7

diff-7:
	@echo && diff -r -u --minimal --exclude={configure.yml,.time_end,.time_start,mflowgen-run*,mflowgen-debug,.stamp,inputs,outputs} ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-cadence-innovus-blocksetup 7-brg-cadence-innovus-blocksetup | grep --color=always -e '^-.*' -e '$$' -e 'Only in ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-cadence-innovus-blocksetup.*' | GREP_COLOR='01;32' grep --color=always -e '^+.*' -e '$$' -e 'Only in 7-brg-cadence-innovus-blocksetup.*' && echo || true

.PHONY: diff-8

diff-8:
	@echo && diff -r -u --minimal --exclude={configure.yml,.time_end,.time_start,mflowgen-run*,mflowgen-debug,.stamp,inputs,outputs} ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-synopsys-pt-power 8-post-synth-power-analysis | grep --color=always -e '^-.*' -e '$$' -e 'Only in ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-synopsys-pt-power.*' | GREP_COLOR='01;32' grep --color=always -e '^+.*' -e '$$' -e 'Only in 8-post-synth-power-analysis.*' && echo || true

.PHONY: diff-9

diff-9:
	@echo && diff -r -u --minimal --exclude={configure.yml,.time_end,.time_start,mflowgen-run*,mflowgen-debug,.stamp,inputs,outputs} ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-cadence-innovus-pnr 9-brg-cadence-innovus-pnr | grep --color=always -e '^-.*' -e '$$' -e 'Only in ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-cadence-innovus-pnr.*' | GREP_COLOR='01;32' grep --color=always -e '^+.*' -e '$$' -e 'Only in 9-brg-cadence-innovus-pnr.*' && echo || true

.PHONY: diff-10

diff-10:
	@echo && diff -r -u --minimal --exclude={configure.yml,.time_end,.time_start,mflowgen-run*,mflowgen-debug,.stamp,inputs,outputs} ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-flow-summary 10-brg-synth-flow-summary | grep --color=always -e '^-.*' -e '$$' -e 'Only in ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-flow-summary.*' | GREP_COLOR='01;32' grep --color=always -e '^+.*' -e '$$' -e 'Only in 10-brg-synth-flow-summary.*' && echo || true

.PHONY: diff-11

diff-11:
	@echo && diff -r -u --minimal --exclude={configure.yml,.time_end,.time_start,mflowgen-run*,mflowgen-debug,.stamp,inputs,outputs} ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-cadence-innovus-signoff 11-brg-cadence-innovus-signoff | grep --color=always -e '^-.*' -e '$$' -e 'Only in ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-cadence-innovus-signoff.*' | GREP_COLOR='01;32' grep --color=always -e '^+.*' -e '$$' -e 'Only in 11-brg-cadence-innovus-signoff.*' && echo || true

.PHONY: diff-12

diff-12:
	@echo && diff -r -u --minimal --exclude={configure.yml,.time_end,.time_start,mflowgen-run*,mflowgen-debug,.stamp,inputs,outputs} ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-flow-summary 12-brg-flow-summary | grep --color=always -e '^-.*' -e '$$' -e 'Only in ../../../../../../classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/steps/brg-flow-summary.*' | GREP_COLOR='01;32' grep --color=always -e '^+.*' -e '$$' -e 'Only in 12-brg-flow-summary.*' && echo || true

# Info

.PHONY: info-0

info-0:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t build-info && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-info -y .mflowgen/0-build-info/configure.yml

.PHONY: info-1

info-1:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t ece5745-block-gather && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-info -y .mflowgen/1-ece5745-block-gather/configure.yml

.PHONY: info-2

info-2:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t freepdk-45nm && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-info -y .mflowgen/2-freepdk-45nm/configure.yml

.PHONY: info-3

info-3:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-rtl-4-state-vcssim && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-info -y .mflowgen/3-brg-rtl-4-state-vcssim/configure.yml

.PHONY: info-4

info-4:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-synopsys-dc-synthesis && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-info -y .mflowgen/4-brg-synopsys-dc-synthesis/configure.yml

.PHONY: info-5

info-5:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-cadence-innovus-init && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-info -y .mflowgen/5-brg-cadence-innovus-init/configure.yml

.PHONY: info-6

info-6:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t post-synth-gate-level-simulation && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-info -y .mflowgen/6-post-synth-gate-level-simulation/configure.yml

.PHONY: info-7

info-7:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-cadence-innovus-blocksetup && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-info -y .mflowgen/7-brg-cadence-innovus-blocksetup/configure.yml

.PHONY: info-8

info-8:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t post-synth-power-analysis && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-info -y .mflowgen/8-post-synth-power-analysis/configure.yml

.PHONY: info-9

info-9:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-cadence-innovus-pnr && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-info -y .mflowgen/9-brg-cadence-innovus-pnr/configure.yml

.PHONY: info-10

info-10:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-synth-flow-summary && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-info -y .mflowgen/10-brg-synth-flow-summary/configure.yml

.PHONY: info-11

info-11:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-cadence-innovus-signoff && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-info -y .mflowgen/11-brg-cadence-innovus-signoff/configure.yml

.PHONY: info-12

info-12:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-letters -c -t brg-flow-summary && /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-info -y .mflowgen/12-brg-flow-summary/configure.yml

# Runtimes

.PHONY: runtimes

runtimes:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-runtimes

# List

.PHONY: list

list:
	@echo && echo Generic Targets: && echo && printf " - %s\\n" "list      -- List all steps" "status    -- Print build status for each step" "runtimes  -- Print runtimes for each step" "graph     -- Generate a PDF of the step dependency graph" "clean-all -- Remove all build directories" "clean-N   -- Clean target N" "info-N    -- Print configured info for step N" "diff-N    -- Diff target N" && echo && echo Targets: && echo && printf " - %s\\n" "  0 : build-info" "  1 : ece5745-block-gather" "  2 : freepdk-45nm" "  3 : brg-rtl-4-state-vcssim" "  4 : brg-synopsys-dc-synthesis" "  5 : brg-cadence-innovus-init" "  6 : post-synth-gate-level-simulation" "  7 : brg-cadence-innovus-blocksetup" "  8 : post-synth-power-analysis" "  9 : brg-cadence-innovus-pnr" " 10 : brg-synth-flow-summary" " 11 : brg-cadence-innovus-signoff" " 12 : brg-flow-summary" && echo && echo Debug Targets: && echo && printf " - %s\\n" "debug-4  : debug-brg-synopsys-dc-synthesis" "debug-8  : debug-post-synth-power-analysis" && echo

# Graph

.PHONY: graph

graph:
	dot -Tpdf .mflowgen/graph.dot > graph.pdf

# Status

.PHONY: status

status:
	@/classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/scripts/mflowgen-status --backend make -s 0-build-info,1-ece5745-block-gather,2-freepdk-45nm,3-brg-rtl-4-state-vcssim,4-brg-synopsys-dc-synthesis,5-brg-cadence-innovus-init,6-post-synth-gate-level-simulation,7-brg-cadence-innovus-blocksetup,8-post-synth-power-analysis,9-brg-cadence-innovus-pnr,10-brg-synth-flow-summary,11-brg-cadence-innovus-signoff,12-brg-flow-summary

