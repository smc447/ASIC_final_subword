#=========================================================================
# sub8
#=========================================================================

import random

# Fix the random seed so results are reproducible
random.seed(0xdeadbeef)

from pymtl3 import *
from proc.test.inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """
    csrr x1, mngr2proc < 5
    csrr x2, mngr2proc < 4
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sub8 x3, x1, x2
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 1
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
  """

# ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
# Define additional directed and random test cases.
# '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\/

#-------------------------------------------------------------------------
# gen_dest_dep_test
#-------------------------------------------------------------------------

def gen_dest_dep_test():
  return [
    gen_rr_dest_dep_test( 5, "sub8", 2, 1, 1 ),
    gen_rr_dest_dep_test( 4, "sub8", 3, 1, 2 ),
    gen_rr_dest_dep_test( 3, "sub8", 4, 1, 3 ),
    gen_rr_dest_dep_test( 2, "sub8", 5, 1, 4 ),
    gen_rr_dest_dep_test( 1, "sub8", 6, 1, 5 ),
    gen_rr_dest_dep_test( 0, "sub8", 7, 1, 6 ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_test
#-------------------------------------------------------------------------

def gen_src0_dep_test():
  return [
    gen_rr_src0_dep_test( 5, "sub8",  8, 1,  7 ),
    gen_rr_src0_dep_test( 4, "sub8",  9, 1,  8 ),
    gen_rr_src0_dep_test( 3, "sub8", 10, 1,  9 ),
    gen_rr_src0_dep_test( 2, "sub8", 11, 1, 10 ),
    gen_rr_src0_dep_test( 1, "sub8", 12, 1, 11 ),
    gen_rr_src0_dep_test( 0, "sub8", 13, 1, 12 ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_test
#-------------------------------------------------------------------------

def gen_src1_dep_test():
  return [
    gen_rr_src1_dep_test( 5, "sub8",  14, 1, 13 ),
    gen_rr_src1_dep_test( 4, "sub8",  14, 2, 12 ),
    gen_rr_src1_dep_test( 3, "sub8",  14, 3, 11 ),
    gen_rr_src1_dep_test( 2, "sub8",  14, 4, 10 ),
    gen_rr_src1_dep_test( 1, "sub8",  14, 5,  9 ),
    gen_rr_src1_dep_test( 0, "sub8",  14, 6,  8 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_test
#-------------------------------------------------------------------------

def gen_srcs_dep_test():
  return [
    gen_rr_srcs_dep_test( 5, "sub8", 20, 1, 19 ),
    gen_rr_srcs_dep_test( 4, "sub8", 21, 3, 18 ),
    gen_rr_srcs_dep_test( 3, "sub8", 22, 5, 17 ),
    gen_rr_srcs_dep_test( 2, "sub8", 23, 7, 16 ),
    gen_rr_srcs_dep_test( 1, "sub8", 24, 9, 15 ),
    gen_rr_srcs_dep_test( 0, "sub8", 25, 4, 21 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rr_src0_eq_dest_test( "sub8", 26, 1, 25 ),
    gen_rr_src1_eq_dest_test( "sub8", 27, 1, 26 ),
    gen_rr_src0_eq_src1_test( "sub8", 28, 0 ),
    gen_rr_srcs_eq_dest_test( "sub8", 29, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [

    gen_rr_value_test( "sub8", 0x00000000, 0x00000000, 0x00000000 ),
    gen_rr_value_test( "sub8", 0x00000001, 0x00000001, 0x00000000 ),
    gen_rr_value_test( "sub8", 0x00000003, 0x00000007, 0x000000fc ),

    gen_rr_value_test( "sub8", 0x00000000, 0xffff8000, 0x01018000 ),
    gen_rr_value_test( "sub8", 0x80000000, 0x00000000, 0x80000000 ),
    gen_rr_value_test( "sub8", 0x80000000, 0xffff8000, 0x81018000 ),

    gen_rr_value_test( "sub8", 0x00000000, 0x00007fff, 0x00008101 ),
    gen_rr_value_test( "sub8", 0x7fffffff, 0x00000000, 0x7fffffff ),
    gen_rr_value_test( "sub8", 0x7fffffff, 0x00007fff, 0x7fff8000 ),

    gen_rr_value_test( "sub8", 0x80000000, 0x00007fff, 0x80008101 ),
    gen_rr_value_test( "sub8", 0x7fffffff, 0xffff8000, 0x80007fff ),

    gen_rr_value_test( "sub8", 0x00000000, 0xffffffff, 0x01010101 ),
    gen_rr_value_test( "sub8", 0xffffffff, 0x00000001, 0xfffffffe ),
    gen_rr_value_test( "sub8", 0xffffffff, 0xffffffff, 0x00000000 ),

  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in range(100):
    src0 = b32( random.randint(0,0xffffffff) )
    src1 = b32( random.randint(0,0xffffffff) )
    dest = (((src0 & 0xff000000) - (src1 & 0xff000000)) & 0xff000000) + \
          (((src0 & 0x00ff0000) - (src1 & 0x00ff0000)) & 0x00ff0000) + \
          (((src0 & 0x0000ff00) - (src1 & 0x0000ff00)) & 0x0000ff00) + \
          (((src0 & 0x000000ff) - (src1 & 0x000000ff)) & 0x000000ff)
        
    asm_code.append( gen_rr_value_test( "sub8", src0.uint(), src1.uint(), dest.uint() ) )
  return asm_code

# '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''/\
