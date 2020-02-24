#include "assert.h"
int main(int argc, char **argv)
{
	int x;

	x = atoi(argv[1]);
	assert(x>0);
	++x;
	assert(x>1);
	printf("Everything is correct\n");
}
