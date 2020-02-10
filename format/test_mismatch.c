#include "stdio.h"
int main(int argc, char **argv)
{
	int a, b, c;
	a = 10,
	b = 5;
	c = 2;
	printf("a has value %d, b has value %d, c is at address: %08x\n", a, b, &c);

	printf("a has value %d, b has value %d, c is at address: %08x\n", a, b);

}
