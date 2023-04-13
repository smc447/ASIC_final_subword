#=========================================================================
# alu PyMTL3 Wrapper
#=========================================================================

from pymtl3 import *
from pymtl3.passes.backends.verilog import *
from pymtl3.stdlib.stream.ifcs import IStreamIfc, OStreamIfc

class ProcDpathAluWrapper( VerilogPlaceholder, Component ):
  def construct( s ):
    s.istream = IStreamIfc( Bits70 )
    s.ostream = OStreamIfc( Bits35 )

    s.set_metadata( VerilogTranslationPass.explicit_module_name,
                    'ProcDpathAluWrapper' )

