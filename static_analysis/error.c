#include "stdio.h"
#include "stdlib.h"
#include "string.h"
void run(char *id)
{
	char command[100];
	sprintf(command, "echo welcome %s", id);
	system(command);
}

int check(char *str1, char *str2)
{
	if(strcmp(str1, str2) == 0) return 1;
	else return 0;
}

int main(int argc, char **argv)
{
	char id[10];
	char input_password[9];
	char password[9];
	char stored_id[8];
	char stored_passwd[9];
	puts("Enter your id:");
	gets(id);
	puts("Enter your password:");
	gets(input_password);

	strcpy(stored_id, "87654321");
	strcpy(stored_passwd, "goodpass");

	if(check(id, stored_id))
	{ 
		run(id);

		for(int i =1;i<=9;i++)
		{
			password[i] = input_password[i];
		}
		if(check(password, stored_passwd))
		{
			printf("Authentication passes\n");
		}
		else
		{
			printf("Authentication fails\n");
			exit(-1);
		}
	}
	else 
	{
		printf("Wrong id!\n");
		exit(-1);
	}
}
