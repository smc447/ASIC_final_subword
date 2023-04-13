#=========================================================================
# Modular C++ Build System Subproject Makefile Fragment
#=========================================================================
# Please read the documenation in 'mcppbs-uguide.txt' for more details
# on how the Modular C++ Build System works.

ubmark_intdeps  = ece4750 
ubmark_cppflags = -I../ubmark -I../ece4750 
ubmark_ldflags  = 
ubmark_libs     = -lubmark -lece4750 

ubmark_hdrs = \
  ubmark-accum.h \
  ubmark-vvadd.h \
  ubmark-cmult.h \
  ubmark-mfilt.h \
  ubmark-bsearch.h \
  ubmark-sort.h \
  ubmark-accum-xcel.h \
  ubmark-vvadd-xcel.h \
  ubmark-sort-xcel.h \
  ubmark-sort2-xcel.h \

ubmark_srcs = \
  ubmark-accum.c \
  ubmark-vvadd.c \
  ubmark-cmult.c \
  ubmark-mfilt.c \
  ubmark-bsearch.c \
  ubmark-sort.c \
  ubmark-accum-xcel.c \
  ubmark-vvadd-xcel.c \
  ubmark-sort-xcel.c \
  ubmark-sort2-xcel.c \

ubmark_test_srcs = \
  ubmark-accum-test.c \
  ubmark-vvadd-test.c \
  ubmark-cmult-test.c \
  ubmark-mfilt-test.c \
  ubmark-bsearch-test.c \
  ubmark-sort-helper-test.c \
  ubmark-sort-test.c \
  ubmark-null-xcel-test.c \
  ubmark-accum-xcel-test.c \
  ubmark-vvadd-xcel-test.c \
  ubmark-sort-xcel-test.c \

ubmark_prog_srcs = \
  ubmark-accum-eval.c \
  ubmark-vvadd-eval.c \
  ubmark-cmult-eval.c \
  ubmark-mfilt-eval.c \
  ubmark-bsearch-eval.c \
  ubmark-sort-eval.c \
  ubmark-sort-eval-1000.c \
  ubmark-sort-eval-750.c \
  ubmark-sort-eval-500.c \
  ubmark-sort-eval-250.c \
  ubmark-sort-eval-100.c \
  ubmark-sort-eval-50.c \
  ubmark-accum-xcel-eval.c \
  ubmark-vvadd-xcel-eval.c \
  ubmark-sort-xcel-eval.c \
  ubmark-sort-xcel-eval-1000.c \
  ubmark-sort-xcel-eval-750.c \
  ubmark-sort-xcel-eval-500.c \
  ubmark-sort-xcel-eval-250.c \
  ubmark-sort-xcel-eval-100.c \
  ubmark-sort-xcel-eval-50.c \
  ubmark-sort2-xcel-eval.c \
  ubmark-sort-dummy.c \
