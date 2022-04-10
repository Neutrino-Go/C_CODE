#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("Input password: ");
	scanf("%s", password);//123456
	printf("Check your password (Y/N): ");

	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}

	int ch = getchar();
	if (ch == 'Y')
	{
		printf("Confirmation successed\n");
	}
	else
	{
		printf("Confirmation failed\n");
	}

	return 0;
}