eval '(exit $?0)' && eval 'exec perl -S $0 ${1+"$@"}'
    & eval 'exec perl -S $0 $argv:q'
    if 0;

# $Id: run_test.pl 2115 2012-01-13 13:57:53Z dfeiock $
# -*- perl -*-

use lib "$ENV{'ACE_ROOT'}/bin";
use PerlACE::Run_Test;

$OASIS_ROOT = "$ENV{'OASIS_ROOT'}";

# Start the DAC
$the_DAC_options = "-ORBEndpoint iiop://localhost:20000 --name=StandardDAC -c Smoke_Test.dac --database=StandardDAC.db -v --debug";
$the_DAC = new PerlACE::Process ("$OASIS_ROOT/bin/oasis_dac", $the_DAC_options);
$the_DAC->Spawn ();

sleep (2);

# Run the example.
$the_Example = new PerlACE::Process ("OASIS_Einode_Smoke_Test");
$the_Example->Spawn ();

sleep (15);

# Kill the application
$the_Example->Kill ();
$the_Example->TimedWait (1);

# Kill the DAC process.
$the_DAC->Kill ();
$the_DAC->TimedWait (1);

exit 0;
