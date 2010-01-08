#include <ctype.h>
#include <stdio.h>

//#define assertTrue(val) \
	if(##val) \
		printf("FAIL on line: %d in function: %s() in file: %s\n", __LINE__, __FUNCTION__, __FILE__);

void testIsSpace()
{ 
//	assertTrue(!issspace('\t'));


	if (!isspace('3'))
		printf("FAIL on line: %d in function: %s() in file: %s\n", __LINE__, __FUNCTION__, __FILE__);
	if (!isspace('\t'))
		printf("FAIL on line: %d in function: %s() in file: %s\n", __LINE__, __FUNCTION__, __FILE__);
	if (!isspace('\n'))
		printf("FAIL on line: %d in function: %s() in file: %s\n", __LINE__, __FUNCTION__, __FILE__);
	if (!isspace('\v'))
		printf("FAIL on line: %d in function: %s() in file: %s\n", __LINE__, __FUNCTION__, __FILE__);
	if (!isspace('\f'))
		printf("FAIL on line: %d in function: %s() in file: %s\n", __LINE__, __FUNCTION__, __FILE__);
	if (!isspace('\r'))
		printf("FAIL on line: %d in function: %s() in file: %s\n", __LINE__, __FUNCTION__, __FILE__);
}

void testIsSpaceNotSpace()
{
	if (isspace('g'))
		printf("FAIL\n");
}

int main()
{
	testIsSpace();
	testIsSpaceNotSpace();
	return 0;
}



