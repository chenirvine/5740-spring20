#include "string.h"
#include "stdlib.h"
#include "stdio.h"
int main(int argc, char **argv)
{
	char *p = malloc(0);

	strcpy(p, "123");

	printf("%p: %s\n", p, p);
}
