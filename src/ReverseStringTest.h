#include <cxxtest/TestSuite.h>

//extern const char* reverseStringMain(int argc, char** argv);
extern void reverseStringMain(int argc, const char** argv, char result[]);

class ReverseStringTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_Unit_Test_1(){
		TS_SKIP("Unit tests are skipped, please author unit tests, if required");
	}
	
	
	void test_Unit_Test_2(){
	    
	    const char *largv[] = {"1", "HELLO"};
	    char result[50];

		reverseStringMain(2, largv, result);
		
	
		TS_ASSERT_EQUALS("OLLEH", result);
	    
	}
	
	void test_Unit_Test_3(){
	    
	    const char *largv[] = {"1", "MONEY"};
	    char result[50];

		reverseStringMain(2, largv, result);
		
	
		TS_ASSERT_EQUALS("YENOM", result);
	    
	}
}; 