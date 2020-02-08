#include "stdlib.h"
int main(int argc, char **argv)
{
	int n = 10;
	int *x = (int *)malloc(n*sizeof(int));

	free(x);

	int *y = (int *)malloc(n*sizeof(int));


	free(x);
}
