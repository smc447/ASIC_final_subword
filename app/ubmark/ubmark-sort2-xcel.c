//========================================================================
// ubmark-sort2-xcel
//========================================================================
// We provide an implementation using the basic sorting acclerator
// protocol that works with the given FL model. You are free to change
// this function however you like. You can change the accelerator
// protocol and/or you can add extra software to facilitate
// software/hardware co-design. But make sure you modify the FL model
// appropriately!
#include <math.h>
#include "ubmark-sort.h"
#include "ubmark-sort2-xcel.h"
#include "ece4750.h"

//------------------------------------------------------------------------
// sort_xcel
//------------------------------------------------------------------------

#ifdef _RISCV

void ubmark_sort2_xcel( int* x, int size )
{
  // We might want to handle special cases in software instead of
  // hardware. So for example, we explicitly check to make sure size is
  // greater than one before trying to use the accelerator.

  if ( size <= 1 )
    return;

  // int size_log = (int) log2f((float)size);
  int* stack_ptr = ece4750_malloc( ( (int)sizeof(int) )* (size >> 1) );

  __asm__ (
    "csrw 0x7e1, %[x];\n"
    "csrw 0x7e2, %[size];\n"
    "csrw 0x7e3, %[stack_ptr];\n"
    "csrw 0x7e0, x0          ;\n"
    "csrr x0,    0x7e0       ;\n"

    // Outputs from the inline assembly block

    :

    // Inputs to the inline assembly block

    : [x]    "r"(x),
      [size] "r"(size),
      [stack_ptr] "r"(stack_ptr)

    // Tell the compiler this accelerator read/writes memory

    : "memory"
  );
  ece4750_free(stack_ptr);
}

#else

void ubmark_sort2_xcel( int* x, int size )
{
  return ubmark_sort( x, size );
}

#endif

