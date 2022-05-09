//Recursion can be solved, but it is too inefficient and a lot of repetitive calculations are performed
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int count = 0;

int Fib(n)
{
	//Count the number of calculations for the 3rd Fibonacci number
	if (n == 3)
		count++;
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = Fib(n);

	printf("%d\n", ret);
	printf("count = %d\n", count);

	return 0;
}