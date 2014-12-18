/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ReverseStringTest_init = false;
#include "/var/www/html/codeit/workspace/ReverseString/src/ReverseStringTest.h"

static ReverseStringTest suite_ReverseStringTest;

static CxxTest::List Tests_ReverseStringTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ReverseStringTest( "/var/www/html/codeit/workspace/ReverseString/src/ReverseStringTest.h", 6, "ReverseStringTest", suite_ReverseStringTest, Tests_ReverseStringTest );

static class TestDescription_suite_ReverseStringTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ReverseStringTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_ReverseStringTest, suiteDescription_ReverseStringTest, 16, "test_Unit_Test_1" ) {}
 void runTest() { suite_ReverseStringTest.test_Unit_Test_1(); }
} testDescription_suite_ReverseStringTest_test_Unit_Test_1;

static class TestDescription_suite_ReverseStringTest_test_Unit_Test_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ReverseStringTest_test_Unit_Test_2() : CxxTest::RealTestDescription( Tests_ReverseStringTest, suiteDescription_ReverseStringTest, 21, "test_Unit_Test_2" ) {}
 void runTest() { suite_ReverseStringTest.test_Unit_Test_2(); }
} testDescription_suite_ReverseStringTest_test_Unit_Test_2;

static class TestDescription_suite_ReverseStringTest_test_Unit_Test_3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ReverseStringTest_test_Unit_Test_3() : CxxTest::RealTestDescription( Tests_ReverseStringTest, suiteDescription_ReverseStringTest, 33, "test_Unit_Test_3" ) {}
 void runTest() { suite_ReverseStringTest.test_Unit_Test_3(); }
} testDescription_suite_ReverseStringTest_test_Unit_Test_3;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
