#include "string.h"
#include "stdio.h"
int main(int argc, char **argv)
{	
	char text[1024];

	memset(text, 0, 1024);
	strcpy(text, argv[1]);
	printf("finish cpy\n");

	printf(text);

	printf("\n");
}
