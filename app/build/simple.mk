#=========================================================================
# Modular C++ Build System Subproject Makefile Fragment
#=========================================================================
# Please read the documenation in 'mcppbs-uguide.txt' for more details
# on how the Modular C++ Build System works.

simple_intdeps  = ece4750 
simple_cppflags = -I../simple -I../ece4750 
simple_ldflags  = 
simple_libs     = -lsimple -lece4750 

simple_hdrs = \
  simple-avg.h \

simple_srcs = \
  simple-avg.c \

simple_test_srcs = \
  simple-avg-test.c \

simple_prog_srcs = \
  simple-avg-adhoc.c \
