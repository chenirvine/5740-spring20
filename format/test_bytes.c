#include "stdio.h"
int main(int argc, char **argv)
{
	int i = 0;
	printf("foobar%n\n", (int *)&i);
	printf("i = %d\n", i);

	printf("foobar123456%n\n", (int *)&i);
	printf("i = %d\n", i);
}
