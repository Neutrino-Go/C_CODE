#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int input = 0;
	printf("Join the coder:>\n");
	printf("Do you want to learn hardly(1/0)?>:");
	scanf("%d", &input);
	if (input == 1)
		printf("Good offer!\n");
	else
		printf("Sell potato.\n");

	return 0;
}