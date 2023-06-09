#=========================================================================
# Modular C++ Build System Subproject Makefile Fragment
#=========================================================================
# Please read the documenation in 'mcppbs-uguide.txt' for more details
# on how the Modular C++ Build System works.

ece4750_intdeps  = 
ece4750_cppflags = -I../ece4750 
ece4750_ldflags  = 
ece4750_libs     = -lece4750 

ece4750_hdrs = \
  ece4750.h \
  ece4750-misc.h \
  ece4750-wprint.h \
  ece4750-check.h \
  ece4750-malloc.h \
  ece4750-bthread.h \

ece4750_srcs = \
  ece4750-misc.c \
  ece4750-wprint.c \
  ece4750-check.c \
  ece4750-malloc.c \
  ece4750-bthread.c \

ece4750_test_srcs = \
  ece4750-check-test.c \
  ece4750-malloc-test.c \
  ece4750-bthread-test.c \

ece4750_prog_srcs = \
  ece4750-wprint-ex.c \

ifeq ($(riscv_crosscompile),yes)

ece4750_srcs += \
  crt0.S

endif
