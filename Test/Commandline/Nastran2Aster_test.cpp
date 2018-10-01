/*
 * Copyright (C) Alneos, s. a r. l. (contact@alneos.fr)
 * Released under the GNU General Public License
 *
 * VegaCommandLine_test.cpp
 *
 *  Created on: Sep 1, 2013
 *      Author: devel
 */

#define BOOST_TEST_MODULE nastran2aster_test
#define BOOST_TEST_IGNORE_NON_ZERO_CHILD_CODE
//#define BOOST_TEST_IGNORE_SIGCHLD

//#define BOOST_TEST_LIMITED_SIGNAL_DETAILS

#include <boost/test/unit_test.hpp>
#include <string>
#include "build_properties.h"
#include "CommandLineUtils.h"

//____________________________________________________________________________//

// TEST_EXEC_SOLVER is "false" on development pc and "true" on node0
// Code Aster launched only on node0, to launch it in the local machine
// either replace "TESTS_EXEC_SOLVER" with true or run
// cmake -DTESTS_EXEC_SOLVER=1 ../..

namespace vega {
namespace tests {

using namespace std;

BOOST_AUTO_TEST_CASE( prob6 ) {
	CommandLineUtils::nastranStudy2Aster("/caw/prob6/prob6.dat", TESTS_EXEC_SOLVER, true, 0.02);
}

BOOST_AUTO_TEST_CASE( prob19 ) {
	CommandLineUtils::nastranStudy2Aster("/caw/prob19/prob19.dat", TESTS_EXEC_SOLVER, true, 0.001);
}

BOOST_AUTO_TEST_CASE( prob30c ) {
	CommandLineUtils::nastranStudy2Aster("/caw/prob30c/prob30c.dat", TESTS_EXEC_SOLVER, true, 0.9);
}

BOOST_AUTO_TEST_CASE( test4a ) {
	CommandLineUtils::nastranStudy2Aster("/alneos/test4a/test4a.dat", TESTS_EXEC_SOLVER, true, 0.00001);
}

BOOST_AUTO_TEST_CASE( rbar1mod ) {
	CommandLineUtils::nastranStudy2Aster("/alneos/rbar1mod/rbar1mod.dat", TESTS_EXEC_SOLVER, true, 0.00001);
}

BOOST_AUTO_TEST_CASE( rod1freeforce ) {
	CommandLineUtils::nastranStudy2Aster("/alneos/rod1freeforce/rod1freeforce.dat", TESTS_EXEC_SOLVER, true, 0.00001);
}

BOOST_AUTO_TEST_CASE( fixedcircularplate ) {
	CommandLineUtils::nastranStudy2Aster("/irt/fixed_circular_plate/fixed_circular_plate.dat", TESTS_EXEC_SOLVER, true, 0.1);
}

BOOST_AUTO_TEST_CASE( prob2 ) {
	CommandLineUtils::nastranStudy2Aster("/irt/prob2/prob2.dat", TESTS_EXEC_SOLVER, true, 0.15);
}

BOOST_AUTO_TEST_CASE( t01331a ) {
    // TODO : LD test not yet complete, but running
	CommandLineUtils::nastranStudy2Aster("/irt/t01331/t01331a.inp", TESTS_EXEC_SOLVER, true, 0.00001);
}

BOOST_AUTO_TEST_CASE( cbush ) {
	CommandLineUtils::nastranStudy2Aster("/irt/cbush/cbush.inp", TESTS_EXEC_SOLVER, true, 0.00001);
}

BOOST_AUTO_TEST_CASE( probA ) {
  // TODO : LD RESU NOOK, maybe mesh refine ?
	CommandLineUtils::nastranStudy2Aster("/irt/probA/probA.bdf", TESTS_EXEC_SOLVER, true, 0.05);
}

BOOST_AUTO_TEST_CASE( cbush1 ) {
	CommandLineUtils::nastranStudy2Aster("/irt/cbush1/cbush1.bdf", TESTS_EXEC_SOLVER, true, 0.05);
}

BOOST_AUTO_TEST_CASE( prob5 ) {
    // TODO : LD missing G param, tests not found, otherwise ok
	CommandLineUtils::nastranStudy2Aster("/irt/prob5/prob5.bdf", TESTS_EXEC_SOLVER, true, 0.05);
}

} /* namespace test */
} /* namespace vega */