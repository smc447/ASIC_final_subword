#=========================================================================
# ProcDpathAlu unit tests
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test_utils import run_test_vector_sim

from proc.ProcDpathAlu import ProcDpathAlu

#-------------------------------------------------------------------------
# add
#-------------------------------------------------------------------------

def test_alu_add( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,   0,  0x00000000,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x00012304,   0,  0x0ffbc964,   '?',      '?',       '?'      ],
    # pos-neg
    [ 0x00132050,   0xd6620040,   0,  0xd6752090,   '?',      '?',       '?'      ],
    [ 0xfff0a440,   0x00004450,   0,  0xfff0e890,   '?',      '?',       '?'      ],
    # neg-neg
    [ 0xfeeeeaa3,   0xf4650000,   0,  0xf353eaa3,   '?',      '?',       '?'      ],
  ], cmdline_opts )

#'''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
#  Add more ALU function tests
#'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\/

#-------------------------------------------------------------------------
# sub
#-------------------------------------------------------------------------

def test_alu_sub( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,   1,  0x00000000,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x00012304,   1,  0x0ff9835c,   '?',      '?',       '?'      ],
    # pos-neg
    [ 0x00132050,   0xd6620040,   1,  0x29b12010,   '?',      '?',       '?'      ],
    [ 0xfff0a440,   0x00004450,   1,  0xfff05ff0,   '?',      '?',       '?'      ],
    # neg-neg
    [ 0xfeeeeaa3,   0xf4650000,   1,  0x0a89eaa3,   '?',      '?',       '?'      ],
  ], cmdline_opts )

#-------------------------------------------------------------------------
# sll
#-------------------------------------------------------------------------

def test_alu_sll( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,   2,  0x00000000,   '?',      '?',       '?'      ],
    [ 0x05050505,   0x00000001,   2,  0x0a0a0a0a,   '?',      '?',       '?'      ],
    [ 0x05050505,   0x00000002,   2,  0x14141414,   '?',      '?',       '?'      ],
    [ 0x05050505,   0x00000004,   2,  0x50505050,   '?',      '?',       '?'      ],
    [ 0x50505050,   0x00000008,   2,  0x50505000,   '?',      '?',       '?'      ],
    [ 0x50505050,   0x0000000f,   2,  0x28280000,   '?',      '?',       '?'      ],
    [ 0x50505050,   0x00000010,   2,  0x50500000,   '?',      '?',       '?'      ],
    [ 0x50505050,   0x0000001f,   2,  0x00000000,   '?',      '?',       '?'      ],
  ], cmdline_opts )

#-------------------------------------------------------------------------
# or
#-------------------------------------------------------------------------

def test_alu_or( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,   3,  0x00000000,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x00012304,   3,  0x0ffba764,   '?',      '?',       '?'      ],
    [ 0x00132050,   0xd6620040,   3,  0xd6732050,   '?',      '?',       '?'      ],
    [ 0xfff0a440,   0x00004450,   3,  0xfff0e450,   '?',      '?',       '?'      ],
    [ 0xfeeeeaa3,   0xf4650000,   3,  0xfeefeaa3,   '?',      '?',       '?'      ],
  ], cmdline_opts )

#-------------------------------------------------------------------------
# slt
#-------------------------------------------------------------------------

def test_alu_slt( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,   4,  0x00000000,   '?',       0,       '?'      ],
    [ 0x0ffaa660,   0x00012304,   4,  0x00000000,   '?',       0,       '?'      ],
    [ 0x00132050,   0xd6620040,   4,  0x00000000,   '?',       0,       '?'      ],
    [ 0xfff0a440,   0x00004450,   4,  0x00000001,   '?',       1,       '?'      ],
    [ 0xffffffff,   0xf4650000,   4,  0x00000000,   '?',       0,       '?'      ],
    [ 0xfeeeeaa3,   0xffffffff,   4,  0x00000001,   '?',       1,       '?'      ],
    [ 0x80000000,   0x7fffffff,   4,  0x00000001,   '?',       1,       '?'      ],
    [ 0x7fffffff,   0x80000000,   4,  0x00000000,   '?',       0,       '?'      ],
  ], cmdline_opts )

#-------------------------------------------------------------------------
# sltu
#-------------------------------------------------------------------------

def test_alu_sltu( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,   5,  0x00000000,   '?',      '?',       0       ],
    [ 0x0ffaa660,   0x00012304,   5,  0x00000000,   '?',      '?',       0       ],
    [ 0x00132050,   0xd6620040,   5,  0x00000001,   '?',      '?',       1       ],
    [ 0xfff0a440,   0x00004450,   5,  0x00000000,   '?',      '?',       0       ],
    [ 0xffffffff,   0xf4650000,   5,  0x00000000,   '?',      '?',       0       ],
    [ 0xfeeeeaa3,   0xffffffff,   5,  0x00000001,   '?',      '?',       1       ],
  ], cmdline_opts )

#-------------------------------------------------------------------------
# and
#-------------------------------------------------------------------------

def test_alu_and( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,   6,  0x00000000,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x00012304,   6,  0x00002200,   '?',      '?',       '?'      ],
    [ 0x00132050,   0xd6620040,   6,  0x00020040,   '?',      '?',       '?'      ],
    [ 0xfff0a440,   0x00004450,   6,  0x00000440,   '?',      '?',       '?'      ],
    [ 0xfeeeeaa3,   0xf4650000,   6,  0xf4640000,   '?',      '?',       '?'      ],
  ], cmdline_opts )

#-------------------------------------------------------------------------
# xor
#-------------------------------------------------------------------------

def test_alu_xor( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,   7,  0x00000000,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x00012304,   7,  0x0ffb8564,   '?',      '?',       '?'      ],
    [ 0x00132050,   0xd6620040,   7,  0xd6712010,   '?',      '?',       '?'      ],
    [ 0xfff0a440,   0x00004450,   7,  0xfff0e010,   '?',      '?',       '?'      ],
    [ 0xfeeeeaa3,   0xf4650000,   7,  0x0a8beaa3,   '?',      '?',       '?'      ],
  ], cmdline_opts )

#-------------------------------------------------------------------------
# nor
#-------------------------------------------------------------------------

def test_alu_nor( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,   8,  0xffffffff,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x00012304,   8,  0xf004589b,   '?',      '?',       '?'      ],
    [ 0x00132050,   0xd6620040,   8,  0x298cdfaf,   '?',      '?',       '?'      ],
    [ 0xfff0a440,   0x00004450,   8,  0x000f1baf,   '?',      '?',       '?'      ],
    [ 0xfeeeeaa3,   0xf4650000,   8,  0x0110155c,   '?',      '?',       '?'      ],
  ], cmdline_opts )

#-------------------------------------------------------------------------
# srl
#-------------------------------------------------------------------------

def test_alu_srl( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,   9,  0x00000000,   '?',      '?',       '?'      ],
    [ 0x05050505,   0x00000001,   9,  0x02828282,   '?',      '?',       '?'      ],
    [ 0x05050505,   0x00000002,   9,  0x01414141,   '?',      '?',       '?'      ],
    [ 0x05050505,   0x00000004,   9,  0x00505050,   '?',      '?',       '?'      ],
    [ 0x50505050,   0x00000008,   9,  0x00505050,   '?',      '?',       '?'      ],
    [ 0x50505050,   0x0000000f,   9,  0x0000a0a0,   '?',      '?',       '?'      ],
    [ 0x50505050,   0x00000010,   9,  0x00005050,   '?',      '?',       '?'      ],
    [ 0x50505050,   0x0000001f,   9,  0x00000000,   '?',      '?',       '?'      ],
  ], cmdline_opts )

#-------------------------------------------------------------------------
# sra
#-------------------------------------------------------------------------

def test_alu_sra( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,   10,  0x00000000,   '?',      '?',       '?'      ],
    [ 0x05050505,   0x00000001,   10,  0x02828282,   '?',      '?',       '?'      ],
    [ 0x05050505,   0x00000002,   10,  0x01414141,   '?',      '?',       '?'      ],
    [ 0x05050505,   0xffffff01,   10,  0x02828282,   '?',      '?',       '?'      ],
    [ 0x05050505,   0xffffff02,   10,  0x01414141,   '?',      '?',       '?'      ],
    [ 0x05050505,   0x00000004,   10,  0x00505050,   '?',      '?',       '?'      ],
    [ 0x80808080,   0x00000008,   10,  0xff808080,   '?',      '?',       '?'      ],
    [ 0x80808080,   0x0000000f,   10,  0xffff0101,   '?',      '?',       '?'      ],
    [ 0x80808080,   0x00000010,   10,  0xffff8080,   '?',      '?',       '?'      ],
    [ 0x80808080,   0x0000001f,   10,  0xffffffff,   '?',      '?',       '?'      ],
    [ 0xffffffff,   0x0000001f,   10,  0xffffffff,   '?',      '?',       '?'      ],
  ], cmdline_opts )

#'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''/\

#-------------------------------------------------------------------------
# cp_op0
#-------------------------------------------------------------------------

def test_alu_cp_op0( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,  11,  0x00000000,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x00012304,  11,  0x0ffaa660,   '?',      '?',       '?'      ],
    [ 0x00132050,   0xd6620040,  11,  0x00132050,   '?',      '?',       '?'      ],
    [ 0xfff0a440,   0x00004450,  11,  0xfff0a440,   '?',      '?',       '?'      ],
    [ 0xfeeeeaa3,   0xf4650000,  11,  0xfeeeeaa3,   '?',      '?',       '?'      ],
  ], cmdline_opts )

#-------------------------------------------------------------------------
# cp_op1
#-------------------------------------------------------------------------

def test_alu_cp_op1( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,  12,  0x00000000,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x00012304,  12,  0x00012304,   '?',      '?',       '?'      ],
    [ 0x00132050,   0xd6620040,  12,  0xd6620040,   '?',      '?',       '?'      ],
    [ 0xfff0a440,   0x00004450,  12,  0x00004450,   '?',      '?',       '?'      ],
    [ 0xfeeeeaa3,   0xf4650000,  12,  0xf4650000,   '?',      '?',       '?'      ],
  ], cmdline_opts )

#-------------------------------------------------------------------------
# cp_equality
#-------------------------------------------------------------------------

def test_alu_fn_equality( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,  14,  0x00000000,   1,        '?',       '?'      ],
    [ 0x0ffaa660,   0x00012304,  14,  0x00000000,   0,        '?',       '?'      ],
    [ 0x00132050,   0xd6620040,  14,  0x00000000,   0,        '?',       '?'      ],
    [ 0xfff0a440,   0x00004450,  14,  0x00000000,   0,        '?',       '?'      ],
    [ 0xfeeeeaa3,   0xf4650000,  14,  0x00000000,   0,        '?',       '?'      ],
  ], cmdline_opts )


#-------------------------------------------------------------------------
# 8 bit add
#-------------------------------------------------------------------------

def test_alu_add_8_bit( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,   16,  0x00000000,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x00012304,   16,  0x0ffbc964,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x000123ff,   16,  0x0ffbc95f,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x0001ff04,   16,  0x0ffba564,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x00ff2304,   16,  0x0ff9c964,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0xff012304,   16,  0x0efbc964,   '?',      '?',       '?'      ],
    # pos-neg
    [ 0x00132050,   0xd6620040,   16,  0xd6752090,   '?',      '?',       '?'      ],
    [ 0xfff0a440,   0x00004450,   16,  0xfff0e890,   '?',      '?',       '?'      ],
    # neg-neg
    [ 0xfeeeeaa3,   0xf4650000,   16,  0xf253eaa3,   '?',      '?',       '?'      ],
  ], cmdline_opts )


#-------------------------------------------------------------------------
# 8 bit sub
#-------------------------------------------------------------------------

def test_alu_sub_8_bit( cmdline_opts ):
  dut = ProcDpathAlu()

  run_test_vector_sim( dut, [
    ('in0           in1           fn  out*          ops_eq*   ops_lt*  ops_ltu*'),
    [ 0x00000000,   0x00000000,   17,  0x00000000,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x00012304,   17,  0x0ff9835c,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x000123ff,   17,  0x0ff98361,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x0001ff04,   17,  0x0ff9a75c,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0x00ff2304,   17,  0x0ffb835c,   '?',      '?',       '?'      ],
    [ 0x0ffaa660,   0xff012304,   17,  0x10f9835c,   '?',      '?',       '?'      ],
    # pos-neg
    [ 0x00132050,   0xd6620040,   17,  0x2ab12010,   '?',      '?',       '?'      ],
    [ 0xfff0a440,   0x00004450,   17,  0xfff060f0,   '?',      '?',       '?'      ],
    # neg-neg
    [ 0xfeeeeaa3,   0xf4650000,   17,  0x0a89eaa3,   '?',      '?',       '?'      ],
  ], cmdline_opts )
