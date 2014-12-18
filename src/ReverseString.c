#include <stdio.h>
#include <string.h>
void reverseStringMain(int argc, const char** argv, char result[]);


void reverseStringMain(int argc, const char** argv, char result[]) {

		int iIndex;
	    char cTemp;
	    int iStrlen;

	    if (argc < 2)
	    	scanf("%s", result);
	    else
	    	strcpy(result, argv[1]);
	    	
	    iStrlen = strlen(result);
	    	
		for(iIndex = 0; iIndex < iStrlen/2; iIndex++)
		{
			cTemp = result[iIndex];
			result[iIndex] = result[iStrlen - iIndex - 1];
			result[iStrlen - iIndex -1] = cTemp;
		}
		
		
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, const char** argv){
	char result[50];
    reverseStringMain(argc, argv, result);
    printf("%s", result);
  
    return 0;
}

#endif