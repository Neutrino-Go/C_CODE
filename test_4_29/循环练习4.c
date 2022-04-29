#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	//Assume the right password is "123456"
	char password[20] = { 0 };
	printf("Please input your password: ");
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//You can't use == to compare two strings, ought to use strcmp
		{
			printf("Login Succeeded!\n");
			break;
		}
		else
		{
			printf("Wrong password! Try again: ");
		}
	}
	if (i == 3)
		printf("Login Failed! Exit the program.\n");
	return 0;
}