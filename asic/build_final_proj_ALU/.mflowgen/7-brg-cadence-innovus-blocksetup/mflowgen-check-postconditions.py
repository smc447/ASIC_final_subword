#! /usr/bin/env mflowgen-python
#-------------------------------------------------------------------------
# mflowgen-check-postconditions.py
#-------------------------------------------------------------------------
# Generated: /classes/ece5745/install/venv-pkgs/x86_64-rhel7/pypy3-pymtl3-7.3.3/site-packages/mflowgen/assertions/assertion_helpers.py

import pytest
import sys

from mflowgen.assertions import File, Tool

RED   = '[31m'
GREEN = '[92m'
END   = '[0m'


def test_0_():
    assert File( 'outputs/design.checkpoint' )

def test_1_():
    assert '(IMPOPT-665)'    not in File( 'logs/run.log' )

def test_2_():
    assert '(IMPVFC-97)'     not in File( 'logs/run.log' )

def test_3_():
    assert '(IMPOGDS-217)'   not in File( 'logs/run.log' )

def test_4_():
    assert '(IMPFP-53)'      not in File( 'logs/run.log' )

def test_5_():
    assert '(IMPREPO-214)'   not in File( 'logs/run.log' )

def test_6_():
    assert '(NRIG-39)'       not in File( 'logs/run.log' )

def test_7_():
    assert '(NRDB-1005)'     not in File( 'logs/run.log' )

def test_8_():
    assert '(IMPCCOPT-2215)' not in File( 'logs/run.log' )


def main():

  print()
  print( GREEN + '    > Checking postconditions for step "brg-cadence-innovus-blocksetup"' + END )
  print()

  files        = [ __file__,  ]
  exit_status  = []

  for f in files:

    # Options for short clean printout:
    #
    # - q         : quiet and short
    # - rA        : print one line per pass/fail test in the short test
    #             :   summary info
    # - tb=short  : shorter traceback printout
    # - color=yes : color
    #

    pytest_args = [ '-q', '-rA', '--disable-warnings',
                    '--tb=short', '--color=yes', '--noconftest', f ]
    print( 'pytest ' + ' '.join( pytest_args ) )
    status = pytest.main( pytest_args )
    exit_status.append( status )
    print()

  # Exit with an error if any test has failed

  if any( exit_status ):
    sys.exit( 1 )

if __name__ == '__main__':
  main()

