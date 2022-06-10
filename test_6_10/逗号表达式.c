#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	
	int d = (c = 5,a = c + 3, b = a - 4, c += 5);
	printf("%d\n", d);

	return 0;

}