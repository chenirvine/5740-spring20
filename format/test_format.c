#include "stdio.h"
int main(int argc, char **argv)
{
	int a = 100;
	char str[100];
	
	printf("The decimal format of a is %d, and hexidecimal is 0x%08x\n", a, a);

	sprintf(str, "The decimal format of a is %d, and hexidecial is 0x%08x\n", a, a);

	printf(str);
}
