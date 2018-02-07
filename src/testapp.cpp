#include "JUnitReporter.h"
#include <iostream>
#include <cstring>



int main()
{
	JUnitReporter testReporter;

	JUnitTestSuites_t JUnitTestSuites;
	memset(&JUnitTestSuites,0,sizeof(JUnitTestSuites));
	JUnitTestSuites.id++;
	JUnitTestSuites.name=(char*)"test test";
	JUnitTestSuites.num_of_tests=10;
	JUnitTestSuites.num_of_failures=0;
	JUnitTestSuites.time_in_sec=0.00001;

	JUnitTestSuites.num_of_test_suites=1;

	JUnitTestSuite_t dummyTestSuite;
	memset(&dummyTestSuite,0,sizeof(dummyTestSuite));
	dummyTestSuite.id++;
	dummyTestSuite.name=(char*)"TC12313131_1";
	dummyTestSuite.num_of_tests=1;
	dummyTestSuite.num_of_failures=0;
	dummyTestSuite.num_of_test_cases=0;
	dummyTestSuite.time_in_sec=0.00001;

	JUnitTestSuites.test_suite_list = &dummyTestSuite;


	testReporter.Report(&JUnitTestSuites);
	return 0;
}
