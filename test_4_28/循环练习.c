#define _CRT_SECURE_NO_WARNINGS 1
//Calculate the factorial of n
#include <stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int factorial = 1;
	printf("Please input the number for calculating it's factorial: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}
	printf("The result of the calculation is: %d", factorial);
	return 0;
}