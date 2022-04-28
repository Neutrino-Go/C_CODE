#define _CRT_SECURE_NO_WARNINGS 1
//Calculate 1!+2!+...+10!
#include <stdio.h>
int main()
{
	int i = 1;
	int sum = 0;
	int fac = 1;
	for (i = 1; i <= 10; i++)
	{
		fac *= i;
		sum += fac;
	}
	printf("The result of the calculation is: %d", sum);
	return 0;
}