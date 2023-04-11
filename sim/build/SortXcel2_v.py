
#=========================================================================
# VSortXcel2_v.py
#=========================================================================
"""Provide a template of PyMTL wrapper to import verilated models.

This wrapper makes a Verilator-generated C++ model appear as if it were a
normal PyMTL model. This template is based on PyMTL v2.
"""

import os

from cffi import FFI

from pymtl3.datatypes import *
from pymtl3.dsl import Component, connect, InPort, OutPort, Wire, update, update_ff

#-------------------------------------------------------------------------
# SortXcel2
#-------------------------------------------------------------------------

class SortXcel2( Component ):
  id_ = 0

  def __init__( s, *args, **kwargs ):
    s._finalization_count = 0

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef("""
      typedef struct {

        // Exposed port interface
        unsigned char * clk;        
        unsigned char * reset;        
        unsigned int * mem_reqstream_msg;        
        unsigned char * mem_reqstream_rdy;        
        unsigned char * mem_reqstream_val;        
        unsigned long * mem_respstream_msg;        
        unsigned char * mem_respstream_rdy;        
        unsigned char * mem_respstream_val;        
        unsigned long * xcel_reqstream_msg;        
        unsigned char * xcel_reqstream_rdy;        
        unsigned char * xcel_reqstream_val;        
        unsigned long * xcel_respstream_msg;        
        unsigned char * xcel_respstream_rdy;        
        unsigned char * xcel_respstream_val;

        // Verilator model
        void * model;

      } VSortXcel2_t;

      VSortXcel2_t * create_model( const char * );
      void destroy_model( VSortXcel2_t *);
      void comb_eval( VSortXcel2_t * );
      void seq_eval( VSortXcel2_t * );
      void assert_en( bool en );
      void trace( VSortXcel2_t *, char * );

    """)

    # Print the modification time stamp of the shared lib
    # print 'Modification time of {}: {}'.format(
    #   'libSortXcel2_v.so', os.path.getmtime( './libSortXcel2_v.so' ) )

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    s._ffi_inst = s.ffi.dlopen('./libSortXcel2_v.so')

    # increment instance count
    SortXcel2.id_ += 1

  def finalize( s ):
    """Finalize the imported component.

    This method closes the shared library opened through CFFI. If an imported
    component is not finalized explicitly (i.e. if you rely on GC to collect a
    no longer used imported component), importing a component with the same
    name before all previous imported components are GCed might lead to
    confusing behaviors. This is because once opened, the shared lib
    is cached by the OS until the OS reference counter for this lib reaches
    0 (you can decrement the reference counter by calling `dl_close()` syscall).

    Fortunately real designs tend to always have the same shared lib corresponding
    to the components with the same name. If you are doing translation testing and
    use the same component class name even if they refer to different designs,
    you might need to call `imported_object.finalize()` at the end of each test
    to ensure correct behaviors.
    """
    assert s._finalization_count == 0,      'Imported component can only be finalized once!'
    s._finalization_count += 1
    s._ffi_inst.destroy_model( s._ffi_m )
    s.ffi.dlclose( s._ffi_inst )
    s.ffi = None
    s._ffi_inst = None

  def __del__( s ):
    if s._finalization_count == 0:
      s._finalization_count += 1
      s._ffi_inst.destroy_model( s._ffi_m )
      s.ffi.dlclose( s._ffi_inst )
      s.ffi = None
      s._ffi_inst = None

  def construct( s, *args, **kwargs ):
    # Set up the VCD file name
    verilator_vcd_file = ""
    if 0:
      if False:
        verilator_vcd_file = ".verilator1.vcd"
      else:
        verilator_vcd_file = "SortXcel2.verilator1.vcd"

    # Convert string to `bytes` which is required by CFFI on python 3
    verilator_vcd_file = verilator_vcd_file.encode('ascii')

    # Construct the model
    s._ffi_m = s._ffi_inst.create_model( s.ffi.new("char[]", verilator_vcd_file) )

    # Buffer for line tracing
    s._line_trace_str = s.ffi.new('char[512]')
    s._convert_string = s.ffi.string

    # Use non-attribute varialbe to reduce CPython bytecode count
    _ffi_m = s._ffi_m
    _ffi_inst_comb_eval = s._ffi_inst.comb_eval
    _ffi_inst_seq_eval  = s._ffi_inst.seq_eval

    # declare the port interface
    s.mem = MemRequesterIfc( MemReqMsg__type__3__opaque_8__addr_32__len_2__data_32, MemRespMsg__type__3__opaque_8__test_2__len_2__data_32 )
    s.xcel = XcelResponderIfc( XcelReqMsg__type__1__addr_5__data_32, XcelRespMsg__type__1__data_32 )

    # update blocks that converts ffi interface to/from pymtl ports
    
    s.s_DOT_reset = Wire( Bits1 )
    @update
    def isignal_s_DOT_reset():
      s.s_DOT_reset @= s.reset
    
    s.s_DOT_mem_DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_mem_DOT_reqstream_DOT_rdy():
      s.s_DOT_mem_DOT_reqstream_DOT_rdy @= s.mem.reqstream.rdy
    
    s.s_DOT_mem_DOT_respstream_DOT_msg = Wire( Bits47 )
    @update
    def istruct_s_DOT_mem_DOT_respstream_DOT_msg():
      s.s_DOT_mem_DOT_respstream_DOT_msg @= s.mem.respstream.msg
    
    s.s_DOT_mem_DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_mem_DOT_respstream_DOT_val():
      s.s_DOT_mem_DOT_respstream_DOT_val @= s.mem.respstream.val
    
    s.s_DOT_xcel_DOT_reqstream_DOT_msg = Wire( Bits38 )
    @update
    def istruct_s_DOT_xcel_DOT_reqstream_DOT_msg():
      s.s_DOT_xcel_DOT_reqstream_DOT_msg @= s.xcel.reqstream.msg
    
    s.s_DOT_xcel_DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_xcel_DOT_reqstream_DOT_val():
      s.s_DOT_xcel_DOT_reqstream_DOT_val @= s.xcel.reqstream.val
    
    s.s_DOT_xcel_DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_xcel_DOT_respstream_DOT_rdy():
      s.s_DOT_xcel_DOT_respstream_DOT_rdy @= s.xcel.respstream.rdy
    
    s.s_DOT_mem_DOT_reqstream_DOT_msg = Wire( Bits77 )
    @update
    def ostruct_s_DOT_mem_DOT_reqstream_DOT_msg():
      s.mem.reqstream.msg.data @= s.s_DOT_mem_DOT_reqstream_DOT_msg[0:32]
      s.mem.reqstream.msg.len @= s.s_DOT_mem_DOT_reqstream_DOT_msg[32:34]
      s.mem.reqstream.msg.addr @= s.s_DOT_mem_DOT_reqstream_DOT_msg[34:66]
      s.mem.reqstream.msg.opaque @= s.s_DOT_mem_DOT_reqstream_DOT_msg[66:74]
      s.mem.reqstream.msg.type_ @= s.s_DOT_mem_DOT_reqstream_DOT_msg[74:77]
    
    s.s_DOT_mem_DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_mem_DOT_reqstream_DOT_val():
      s.mem.reqstream.val @= s.s_DOT_mem_DOT_reqstream_DOT_val
    
    s.s_DOT_mem_DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_mem_DOT_respstream_DOT_rdy():
      s.mem.respstream.rdy @= s.s_DOT_mem_DOT_respstream_DOT_rdy
    
    s.s_DOT_xcel_DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_xcel_DOT_reqstream_DOT_rdy():
      s.xcel.reqstream.rdy @= s.s_DOT_xcel_DOT_reqstream_DOT_rdy
    
    s.s_DOT_xcel_DOT_respstream_DOT_msg = Wire( Bits33 )
    @update
    def ostruct_s_DOT_xcel_DOT_respstream_DOT_msg():
      s.xcel.respstream.msg.data @= s.s_DOT_xcel_DOT_respstream_DOT_msg[0:32]
      s.xcel.respstream.msg.type_ @= s.s_DOT_xcel_DOT_respstream_DOT_msg[32:33]
    
    s.s_DOT_xcel_DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_xcel_DOT_respstream_DOT_val():
      s.xcel.respstream.val @= s.s_DOT_xcel_DOT_respstream_DOT_val

    @update
    def comb_upblk():

      # Set inputs
      
      _ffi_m.reset[0] = int(s.s_DOT_reset)
      
      _ffi_m.mem_reqstream_rdy[0] = int(s.s_DOT_mem_DOT_reqstream_DOT_rdy)
      
      _ffi_m.mem_respstream_msg[0] = int(s.s_DOT_mem_DOT_respstream_DOT_msg)
      
      _ffi_m.mem_respstream_val[0] = int(s.s_DOT_mem_DOT_respstream_DOT_val)
      
      _ffi_m.xcel_reqstream_msg[0] = int(s.s_DOT_xcel_DOT_reqstream_DOT_msg)
      
      _ffi_m.xcel_reqstream_val[0] = int(s.s_DOT_xcel_DOT_reqstream_DOT_val)
      
      _ffi_m.xcel_respstream_rdy[0] = int(s.s_DOT_xcel_DOT_respstream_DOT_rdy)

      _ffi_inst_comb_eval( _ffi_m )

      # Write all outputs
      
      x = _ffi_m.mem_reqstream_msg
      s.s_DOT_mem_DOT_reqstream_DOT_msg[0:32] @= x[0]
      s.s_DOT_mem_DOT_reqstream_DOT_msg[32:64] @= x[1]
      s.s_DOT_mem_DOT_reqstream_DOT_msg[64:77] @= x[2]
      
      s.s_DOT_mem_DOT_reqstream_DOT_val @= _ffi_m.mem_reqstream_val[0]
      
      s.s_DOT_mem_DOT_respstream_DOT_rdy @= _ffi_m.mem_respstream_rdy[0]
      
      s.s_DOT_xcel_DOT_reqstream_DOT_rdy @= _ffi_m.xcel_reqstream_rdy[0]
      
      s.s_DOT_xcel_DOT_respstream_DOT_msg @= _ffi_m.xcel_respstream_msg[0]
      
      s.s_DOT_xcel_DOT_respstream_DOT_val @= _ffi_m.xcel_respstream_val[0]

    @update_ff
    def seq_upblk():
      # seq_eval will automatically tick clock in C land
      _ffi_inst_seq_eval( _ffi_m )

  def assert_en( s, en ):
    # TODO: for verilator, any assertion failure will cause the C simulator
    # to abort, which results in a Python internal error. A better approach
    # is to throw a Python exception at the time of assertion failure.
    # Verilator allows user-defined `stop` function which is called when
    # the simulation is expected to stop due to various reasons. We might
    # be able to raise a Python exception through Python C API (although
    # at this moment I'm not sure if the C API's are compatible between
    # PyPy and CPython).
    assert isinstance( en, bool )
    s._ffi_inst.assert_en( en )

  def line_trace( s ):
    if 1:
      s._ffi_inst.trace( s._ffi_m, s._line_trace_str )
      return s._convert_string( s._line_trace_str ).decode('ascii')
    else:
      return f' clk={s.clk}, reset={s.reset}, mem.reqstream.msg={s.mem.reqstream.msg}, mem.reqstream.rdy={s.mem.reqstream.rdy}, mem.reqstream.val={s.mem.reqstream.val}, mem.respstream.msg={s.mem.respstream.msg}, mem.respstream.rdy={s.mem.respstream.rdy}, mem.respstream.val={s.mem.respstream.val}, xcel.reqstream.msg={s.xcel.reqstream.msg}, xcel.reqstream.rdy={s.xcel.reqstream.rdy}, xcel.reqstream.val={s.xcel.reqstream.val}, xcel.respstream.msg={s.xcel.respstream.msg}, xcel.respstream.rdy={s.xcel.respstream.rdy}, xcel.respstream.val={s.xcel.respstream.val},'

  def internal_line_trace( s ):
    return ''
