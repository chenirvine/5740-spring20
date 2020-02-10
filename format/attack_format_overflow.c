#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(int argc, char **argv)
{

	unsigned char canary[5];
	unsigned char foo[4];
	memset(foo, 0, sizeof (foo));
	memset(canary, 0, sizeof(canary));
	/* 0 * before */
	strcpy (canary, "AAAA");
	printf ("canary: %02x %02x %02x %02x\n", canary[0], canary[1], canary[2], canary[3]);
	/* 1 */ 
	printf ("%16u%n", 7350, (int *) &foo[0]);
	/* 2 */ 
	printf ("%32u%n", 7350, (int *) &foo[1]);
	/* 3 */ 
	printf ("%64u%n", 7350, (int *) &foo[2]);
	/* 4 */ 
	printf ("%128u%n", 7350, (int *) &foo[3]);
	/* 5 * after */ 
	printf ("foo: %d %d %d %d\n", foo[0], foo[1], foo[2], foo[3]);
	printf ("canary: %02x %02x %02x %02x\n", canary[0], canary[1], canary[2], canary[3]);
}
