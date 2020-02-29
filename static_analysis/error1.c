 static char correct_passwd[16];
 void run(char *str){
	printf("I am running with truncated parameter:");
	printf(str);
	printf("\n");
 }
 int main(int argc, char **argv)
 {
       	int i;
	int size;
        	char password[20], *parameter;
	void (*funptr)(char *);
	if(argc != 3) exit(-1);
        	puts("Enter your password:");
       	gets(password);
	printf("Your input is: ");
       	printf(password);
	printf("\n");

       	strcpy(correct_passwd, "1234567890054321");

       	if(strcmp(password, correct_passwd) ==0){
                	system("echo %s\n", argv[1]);
               	i = atoi(argv[1]);
                	correct_passwd[i] = 'A';
		funptr = &run;
		size = i;
		parameter = (char *)malloc(size);
		memcpy(parameter, argv[2], size);
		(void)(*funptr)(parameter);
		if(parameter) free(parameter);
      	}
 	else { 
		printf("Authentication fail\n");
		exit(-1);
	}
 }
