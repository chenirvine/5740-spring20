int main(int argc, char **argv)
{
	char *p = malloc(10);

	puts("Enter a string:\n");
	gets(p);

	printf("%p, %s\n", p, p);

	free(p);
	printf("The memory %p has been freed\n", p);

	printf("%p, %s\n", p, p);

	puts("Enter the second string:\n");
	gets(p);

	printf("%p, %s\n", p, p);
}
