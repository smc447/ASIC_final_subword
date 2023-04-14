#=========================================================================
# Alu wrapper test
#=========================================================================

import pytest

from random import randint

from pymtl3 import *
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim
from pymtl3.stdlib.stream import StreamSourceFL, StreamSinkFL

from proc.ProcDpathAluWrapper import ProcDpathAluWrapper

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

class TestHarness( Component ):

  def construct( s, imul ):

    # Instantiate models

    s.src  = StreamSourceFL( Bits71 )
    s.sink = StreamSinkFL( Bits35 )
    s.imul = imul

    # Connect

    s.src.ostream  //= s.imul.istream
    s.imul.ostream //= s.sink.istream

  def done( s ):
    return s.src.done() and s.sink.done()

  def line_trace( s ):
    return s.src.line_trace() + " > " + s.imul.line_trace() + " > " + s.sink.line_trace()

#-------------------------------------------------------------------------
# mk_imsg/mk_omsg
#-------------------------------------------------------------------------

# Make input message, truncate ints to ensure they fit in 32 bits.

def mk_imsg( a, b, fn ):
  return concat( Bits7( fn, trunc_int=True ), Bits32( a, trunc_int=True ), Bits32( b, trunc_int=True ) )

# Make output message, truncate ints to ensure they fit in 32 bits.

def mk_omsg( a, eq, lt, ltu ):
  return concat( Bits1( eq, trunc_int=True ), Bits1( lt, trunc_int=True ), Bits1( ltu, trunc_int=True ), Bits32( a, trunc_int=True ) )

#-------------------------------------------------------------------------
# add
#-------------------------------------------------------------------------

add_msgs = [
  mk_imsg(  0x00000000,   0x00000000,   0 ), mk_omsg( 0x00000000,   1,      0,       0 ),
  mk_imsg(  0x0ffaa660,   0x00012304,   0 ), mk_omsg( 0x0ffbc964,   0,      0,       0 ),
  mk_imsg(  0x00132050,   0xd6620040,   0 ), mk_omsg( 0xd6752090,   0,      0,       1 ),
  mk_imsg(  0xfff0a440,   0x00004450,   0 ), mk_omsg( 0xfff0e890,   0,      1,       0 ),
  mk_imsg(  0xfeeeeaa3,   0xf4650000,   0 ), mk_omsg( 0xf353eaa3,   0,      0,       0 ),
]

#----------------------------------------------------------------------
# Test Case: sub
#----------------------------------------------------------------------

sub_msgs = [
  mk_imsg( 0x00000000,   0x00000000,   1 ), mk_omsg( 0x00000000, 1, 0, 0 ),
  mk_imsg( 0x0ffaa660,   0x00012304,   1 ), mk_omsg( 0x0ff9835c, 0, 0, 0 ),
  mk_imsg( 0x00132050,   0xd6620040,   1 ), mk_omsg( 0x29b12010, 0, 0, 1 ),
  mk_imsg( 0xfff0a440,   0x00004450,   1 ), mk_omsg( 0xfff05ff0, 0, 1, 0 ),
  mk_imsg( 0xfeeeeaa3,   0xf4650000,   1 ), mk_omsg( 0x0a89eaa3, 0, 0, 0 ),
]

#----------------------------------------------------------------------
# Test Case: sll
#----------------------------------------------------------------------

sll_msgs = [
  mk_imsg(  0x00000000,   0x00000000,   2 ), mk_omsg( 0x00000000, 1, 0, 0 ),
  mk_imsg(  0x05050505,   0x00000001,   2 ), mk_omsg( 0x0a0a0a0a, 0, 0, 0 ),
  mk_imsg(  0x05050505,   0x00000002,   2 ), mk_omsg( 0x14141414, 0, 0, 0 ),
  mk_imsg(  0x05050505,   0x00000004,   2 ), mk_omsg( 0x50505050, 0, 0, 0 ),
  mk_imsg(  0x50505050,   0x00000008,   2 ), mk_omsg( 0x50505000, 0, 0, 0 ),
  mk_imsg(  0x50505050,   0x0000000f,   2 ), mk_omsg( 0x28280000, 0, 0, 0 ),
  mk_imsg(  0x50505050,   0x00000010,   2 ), mk_omsg( 0x50500000, 0, 0, 0 ),
  mk_imsg(  0x50505050,   0x0000001f,   2 ), mk_omsg( 0x00000000, 0, 0, 0 ),
]

#----------------------------------------------------------------------
# Test Case: or
#----------------------------------------------------------------------

or_msgs = [
  mk_imsg(  0x00000000,   0x00000000,   3 ), mk_omsg( 0x00000000, 1, 0, 0 ),
  mk_imsg(  0x0ffaa660,   0x00012304,   3 ), mk_omsg( 0x0ffba764, 0, 0, 0 ),
  mk_imsg(  0x00132050,   0xd6620040,   3 ), mk_omsg( 0xd6732050, 0, 0, 1 ),
  mk_imsg(  0xfff0a440,   0x00004450,   3 ), mk_omsg( 0xfff0e450, 0, 1, 0 ),
  mk_imsg(  0xfeeeeaa3,   0xf4650000,   3 ), mk_omsg( 0xfeefeaa3, 0, 0, 0 ),
  ]

#----------------------------------------------------------------------
# Test Case: slt
#----------------------------------------------------------------------

slt_msgs = [
  mk_imsg(  0x00000000,   0x00000000,   4 ), mk_omsg( 0x00000000, 1, 0, 0 ),
  mk_imsg(  0x0ffaa660,   0x00012304,   4 ), mk_omsg( 0x00000000, 0, 0, 0 ),
  mk_imsg(  0x00132050,   0xd6620040,   4 ), mk_omsg( 0x00000000, 0, 0, 1 ),
  mk_imsg(  0xfff0a440,   0x00004450,   4 ), mk_omsg( 0x00000001, 0, 1, 0 ),
  mk_imsg(  0xffffffff,   0xf4650000,   4 ), mk_omsg( 0x00000000, 0, 0, 0 ),
  mk_imsg(  0xfeeeeaa3,   0xffffffff,   4 ), mk_omsg( 0x00000001, 0, 1, 1 ),
  mk_imsg(  0x80000000,   0x7fffffff,   4 ), mk_omsg( 0x00000001, 0, 1, 0 ),
  mk_imsg(  0x7fffffff,   0x80000000,   4 ), mk_omsg( 0x00000000, 0, 0, 1 ),
]

#----------------------------------------------------------------------
# Test Case: sltu
#----------------------------------------------------------------------

sltu_msgs = [
  mk_imsg(  0x00000000,   0x00000000,   5 ), mk_omsg( 0x00000000, 1, 0, 0 ),
  mk_imsg(  0x0ffaa660,   0x00012304,   5 ), mk_omsg( 0x00000000, 0, 0, 0 ),
  mk_imsg(  0x00132050,   0xd6620040,   5 ), mk_omsg( 0x00000001, 0, 0, 1 ),
  mk_imsg(  0xfff0a440,   0x00004450,   5 ), mk_omsg( 0x00000000, 0, 1, 0 ),
  mk_imsg(  0xffffffff,   0xf4650000,   5 ), mk_omsg( 0x00000000, 0, 0, 0 ),
  mk_imsg(  0xfeeeeaa3,   0xffffffff,   5 ), mk_omsg( 0x00000001, 0, 1, 1 ),
  mk_imsg(  0x80000000,   0x7fffffff,   5 ), mk_omsg( 0x00000000, 0, 1, 0 ),
  mk_imsg(  0x7fffffff,   0x80000000,   5 ), mk_omsg( 0x00000001, 0, 0, 1 ),
]

#----------------------------------------------------------------------
# Test Case: and
#----------------------------------------------------------------------

and_msgs = [
  mk_imsg(  0x00000000,   0x00000000,   6 ), mk_omsg( 0x00000000, 1, 0, 0 ),
  mk_imsg(  0x0ffaa660,   0x00012304,   6 ), mk_omsg( 0x00002200, 0, 0, 0 ),
  mk_imsg(  0x00132050,   0xd6620040,   6 ), mk_omsg( 0x00020040, 0, 0, 1 ),
  mk_imsg(  0xfff0a440,   0x00004450,   6 ), mk_omsg( 0x00000440, 0, 1, 0 ),
  mk_imsg(  0xfeeeeaa3,   0xf4650000,   6 ), mk_omsg( 0xf4640000, 0, 0, 0 ),
  ]

#----------------------------------------------------------------------
# Test Case: xor
#----------------------------------------------------------------------

xor_msgs = [
  mk_imsg(  0x00000000,   0x00000000,   7 ), mk_omsg( 0x00000000, 1, 0, 0 ),
  mk_imsg(  0x0ffaa660,   0x00012304,   7 ), mk_omsg( 0x0ffb8564, 0, 0, 0 ),
  mk_imsg(  0x00132050,   0xd6620040,   7 ), mk_omsg( 0xd6712010, 0, 0, 1 ),
  mk_imsg(  0xfff0a440,   0x00004450,   7 ), mk_omsg( 0xfff0e010, 0, 1, 0 ),
  mk_imsg(  0xfeeeeaa3,   0xf4650000,   7 ), mk_omsg( 0x0a8beaa3, 0, 0, 0 ),
  ]

#----------------------------------------------------------------------
# Test Case: nor
#----------------------------------------------------------------------

nor_msgs = [
  mk_imsg(  0x00000000,   0x00000000,   8 ), mk_omsg( 0xffffffff, 1, 0, 0 ),
  mk_imsg(  0x0ffaa660,   0x00012304,   8 ), mk_omsg( 0xf004589b, 0, 0, 0 ),
  mk_imsg(  0x00132050,   0xd6620040,   8 ), mk_omsg( 0x298cdfaf, 0, 0, 1 ),
  mk_imsg(  0xfff0a440,   0x00004450,   8 ), mk_omsg( 0x000f1baf, 0, 1, 0 ),
  mk_imsg(  0xfeeeeaa3,   0xf4650000,   8 ), mk_omsg( 0x0110155c, 0, 0, 0 ),
  ]


#----------------------------------------------------------------------
# Test Case: srl
#----------------------------------------------------------------------

srl_msgs = [
  mk_imsg(  0x00000000,   0x00000000,   9 ), mk_omsg( 0x00000000, 1, 0, 0 ),
  mk_imsg(  0x05050505,   0x00000001,   9 ), mk_omsg( 0x02828282, 0, 0, 0 ),
  mk_imsg(  0x05050505,   0x00000002,   9 ), mk_omsg( 0x01414141, 0, 0, 0 ),
  mk_imsg(  0x05050505,   0x00000004,   9 ), mk_omsg( 0x00505050, 0, 0, 0 ),
  mk_imsg(  0x50505050,   0x00000008,   9 ), mk_omsg( 0x00505050, 0, 0, 0 ),
  mk_imsg(  0x50505050,   0x0000000f,   9 ), mk_omsg( 0x0000a0a0, 0, 0, 0 ),
  mk_imsg(  0x50505050,   0x00000010,   9 ), mk_omsg( 0x00005050, 0, 0, 0 ),
  mk_imsg(  0x50505050,   0x0000001f,   9 ), mk_omsg( 0x00000000, 0, 0, 0 ),
]

#----------------------------------------------------------------------
# Test Case: sra
#----------------------------------------------------------------------

sra_msgs = [
  mk_imsg(  0x00000000,   0x00000000,   10 ), mk_omsg( 0x00000000, 1, 0, 0 ),
  mk_imsg(  0x05050505,   0x00000001,   10 ), mk_omsg( 0x02828282, 0, 0, 0 ),
  mk_imsg(  0x05050505,   0x00000002,   10 ), mk_omsg( 0x01414141, 0, 0, 0 ),
  mk_imsg(  0x05050505,   0x00000004,   10 ), mk_omsg( 0x00505050, 0, 0, 0 ),
  mk_imsg(  0x50505050,   0x00000008,   10 ), mk_omsg( 0x00505050, 0, 0, 0 ),
  mk_imsg(  0x50505050,   0x0000000f,   10 ), mk_omsg( 0x0000a0a0, 0, 0, 0 ),
  mk_imsg(  0x50505050,   0x00000010,   10 ), mk_omsg( 0x00005050, 0, 0, 0 ),
  mk_imsg(  0x50505050,   0x0000001f,   10 ), mk_omsg( 0x00000000, 0, 0, 0 ),
]


#-------------------------------------------------------------------------
# add8
#-------------------------------------------------------------------------

add8_msgs = [
  mk_imsg(  0x00000000,   0x00000000,   16 ), mk_omsg( 0x00000000,   1,      0,       0 ),
  mk_imsg(  0x0ffaa660,   0x00012304,   16 ), mk_omsg( 0x0ffbc964,   0,      0,       0 ),
  mk_imsg(  0x0ffaa660,   0x000123ff,   16 ), mk_omsg( 0x0ffbc95f,   0,      0,       0 ),
  mk_imsg(  0x0ffaa660,   0x0001ff04,   16 ), mk_omsg( 0x0ffba564,   0,      0,       0 ),
  mk_imsg(  0x0ffaa660,   0x00ff2304,   16 ), mk_omsg( 0x0ff9c964,   0,      0,       0 ),

  mk_imsg(  0x0ffaa660,   0xff012304,   16 ), mk_omsg( 0x0efbc964,   0,      0,       1 ),
  mk_imsg(  0x00132050,   0xd6620040,   16 ), mk_omsg( 0xd6752090,   0,      0,       1 ),
  mk_imsg(  0xfff0a440,   0x00004450,   16 ), mk_omsg( 0xfff0e890,   0,      1,       0 ),
  mk_imsg(  0xfeeeeaa3,   0xf4650000,   16 ), mk_omsg( 0xf253eaa3,   0,      0,       0 )
]

#-------------------------------------------------------------------------
# sub8
#-------------------------------------------------------------------------

sub8_msgs = [
  mk_imsg(  0x00000000,   0x00000000,   17 ), mk_omsg( 0x00000000,   1,      0,       0 ),
  mk_imsg(  0x0ffaa660,   0x00012304,   17 ), mk_omsg( 0x0ff9835c,   0,      0,       0 ),
  mk_imsg(  0x0ffaa660,   0x000123ff,   17 ), mk_omsg( 0x0ff98361,   0,      0,       0 ),
  mk_imsg(  0x0ffaa660,   0x0001ff04,   17 ), mk_omsg( 0x0ff9a75c,   0,      0,       0 ),
  mk_imsg(  0x0ffaa660,   0x00ff2304,   17 ), mk_omsg( 0x0ffb835c,   0,      0,       0 ),

  mk_imsg(  0x0ffaa660,   0xff012304,   17 ), mk_omsg( 0x10f9835c,   0,      0,       1 ),
  mk_imsg(  0x00132050,   0xd6620040,   17 ), mk_omsg( 0x2ab12010,   0,      0,       1 ),
  mk_imsg(  0xfff0a440,   0x00004450,   17 ), mk_omsg( 0xfff060f0,   0,      1,       0 ),
  mk_imsg(  0xfeeeeaa3,   0xf4650000,   17 ), mk_omsg( 0x0a89eaa3,   0,      0,       0 )
]
#-------------------------------------------------------------------------
# Test Case Table
#-------------------------------------------------------------------------

test_case_table = mk_test_case_table([
  (               "msgs        src_delay sink_delay"),
  [ "add",        add_msgs,    0,        0          ],
  [ "sub",        sub_msgs,    0,        0          ],
  [ "sll",        sll_msgs,    0,        0          ],
  [ "or",         or_msgs,     0,        0          ],
  [ "slt",        slt_msgs,    0,        0          ],
  [ "sltu",       sltu_msgs,   0,        0          ],
  [ "and",        and_msgs,    0,        0          ],
  [ "add8",       add8_msgs,   0,        0          ],
  [ "sub8",       sub8_msgs,   0,        0          ],

])

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test( test_params, cmdline_opts ):

  th = TestHarness( ProcDpathAluWrapper() )

  th.set_param("top.src.construct",
    msgs=test_params.msgs[::2],
    initial_delay=test_params.src_delay+3,
    interval_delay=test_params.src_delay )

  th.set_param("top.sink.construct",
    msgs=test_params.msgs[1::2],
    initial_delay=test_params.sink_delay+3,
    interval_delay=test_params.sink_delay )

  run_sim( th, cmdline_opts, duts=['imul'] )

