#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int max = 0;
	//Assume the greatest common divisor is the smallest of two numbers
	if (m > n)
	{
		max = n;
	}
	else
	{
		max = m;
	}

	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{
			printf("The greatest common divisor is %d", max);
			break;
		}
		max--;
	}

	return 0;
}