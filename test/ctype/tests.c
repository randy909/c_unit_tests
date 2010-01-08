#include <ctype.h>
#include <stdio.h>

#define assertTrue(condition)\
	if (!condition) {\
		printf("FAILURE: %s(%d) : %s : %s was expected to be true\n", __FILE__, __LINE__, __FUNCTION__, #condition);\
		return;\
	}

#define assertFalse(condition)\
	if (condition) {\
		printf("FAILURE: %s(%d) : %s : %s was expected to be false\n", __FILE__, __LINE__, __FUNCTION__, #condition);\
		return;\
	}

void testIsSpace()
{ 
	assertTrue(isspace(' '));
	assertTrue(isspace('\t'));
	assertTrue(isspace('\n'));
	assertTrue(isspace('\v'));
	assertTrue(isspace('\f'));
	assertTrue(isspace('\r'));
	assertTrue(isspace('3'));
}

void testIsSpaceNotSpace()
{
	assertFalse(isspace('g'));
	assertFalse(isspace(' '));
}

int main()
{
	testIsSpace();
	testIsSpaceNotSpace();

	return 0;
}



