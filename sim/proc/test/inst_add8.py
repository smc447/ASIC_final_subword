#=========================================================================
# add8
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
    add8 x3, x1, x2
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 9
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
  """

#-------------------------------------------------------------------------
# gen_dest_dep_test
#-------------------------------------------------------------------------

def gen_dest_dep_test():
  return [
    gen_rr_dest_dep_test( 5, "add8", 1, 1, 2 ),
    gen_rr_dest_dep_test( 4, "add8", 2, 1, 3 ),
    gen_rr_dest_dep_test( 3, "add8", 3, 1, 4 ),
    gen_rr_dest_dep_test( 2, "add8", 4, 1, 5 ),
    gen_rr_dest_dep_test( 1, "add8", 5, 1, 6 ),
    gen_rr_dest_dep_test( 0, "add8", 6, 1, 7 ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_test
#-------------------------------------------------------------------------

def gen_src0_dep_test():
  return [
    gen_rr_src0_dep_test( 5, "add8",  7, 1,  8 ),
    gen_rr_src0_dep_test( 4, "add8",  8, 1,  9 ),
    gen_rr_src0_dep_test( 3, "add8",  9, 1, 10 ),
    gen_rr_src0_dep_test( 2, "add8", 10, 1, 11 ),
    gen_rr_src0_dep_test( 1, "add8", 11, 1, 12 ),
    gen_rr_src0_dep_test( 0, "add8", 12, 1, 13 ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_test
#-------------------------------------------------------------------------

def gen_src1_dep_test():
  return [
    gen_rr_src1_dep_test( 5, "add8", 1, 13, 14 ),
    gen_rr_src1_dep_test( 4, "add8", 1, 14, 15 ),
    gen_rr_src1_dep_test( 3, "add8", 1, 15, 16 ),
    gen_rr_src1_dep_test( 2, "add8", 1, 16, 17 ),
    gen_rr_src1_dep_test( 1, "add8", 1, 17, 18 ),
    gen_rr_src1_dep_test( 0, "add8", 1, 18, 19 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_test
#-------------------------------------------------------------------------

def gen_srcs_dep_test():
  return [
    gen_rr_srcs_dep_test( 5, "add8", 12, 2, 14 ),
    gen_rr_srcs_dep_test( 4, "add8", 13, 3, 16 ),
    gen_rr_srcs_dep_test( 3, "add8", 14, 4, 18 ),
    gen_rr_srcs_dep_test( 2, "add8", 15, 5, 20 ),
    gen_rr_srcs_dep_test( 1, "add8", 16, 6, 22 ),
    gen_rr_srcs_dep_test( 0, "add8", 17, 7, 24 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rr_src0_eq_dest_test( "add8", 25, 1, 26 ),
    gen_rr_src1_eq_dest_test( "add8", 26, 1, 27 ),
    gen_rr_src0_eq_src1_test( "add8", 27, 54 ),
    gen_rr_srcs_eq_dest_test( "add8", 28, 56 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [

    gen_rr_value_test( "add8", 0x00000000, 0x00000000, 0x00000000 ),
    gen_rr_value_test( "add8", 0x00000001, 0x00000001, 0x00000002 ),
    gen_rr_value_test( "add8", 0x00000003, 0x00000007, 0x0000000a ),

    gen_rr_value_test( "add8", 0x00000000, 0xffff8000, 0xffff8000 ),
    gen_rr_value_test( "add8", 0x80000000, 0x00000000, 0x80000000 ),
    gen_rr_value_test( "add8", 0x80000000, 0xffff8000, 0x7fff8000 ),

    gen_rr_value_test( "add8", 0x00000000, 0x00007fff, 0x00007fff ),
    gen_rr_value_test( "add8", 0x7fffffff, 0x00000000, 0x7fffffff ),
    gen_rr_value_test( "add8", 0x7fffffff, 0x00007fff, 0x7fff7efe ),

    gen_rr_value_test( "add8", 0x80000000, 0x00007fff, 0x80007fff ),
    gen_rr_value_test( "add8", 0x7fffffff, 0xffff8000, 0x7efe7fff ),

    gen_rr_value_test( "add8", 0x00000000, 0xffffffff, 0xffffffff ),
    gen_rr_value_test( "add8", 0xffffffff, 0x00000001, 0xffffff00 ),
    gen_rr_value_test( "add8", 0xffffffff, 0xffffffff, 0xfefefefe ),

  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in range(100):
    src0 = b32( random.randint(0,0xffffffff) )
    src1 = b32( random.randint(0,0xffffffff) )
    dest = (((src0 & 0xff000000) + (src1 & 0xff000000)) & 0xff000000) + \
            (((src0 & 0x00ff0000) + (src1 & 0x00ff0000)) & 0x00ff0000) + \
            (((src0 & 0x0000ff00) + (src1 & 0x0000ff00)) & 0x0000ff00) + \
            (((src0 & 0x000000ff) + (src1 & 0x000000ff)) & 0x000000ff)
          

    asm_code.append( gen_rr_value_test( "add8", src0.uint(), src1.uint(), dest.uint() ) )
  return asm_code

