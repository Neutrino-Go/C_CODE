#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	int a = 1;
	int b = 1;
	int c = 1;
	printf("I'm a frog that can jump one or two floors at a time, tell me the number of floors, and I tell you how many ways I can jump up: ");
	scanf("%d", &n);
	while (n > 1)
	{
		a = b;
		b = c;
		c = a + b;
		n--;
	}
	printf("I can do it in %d ways", c);
	return 0;
}