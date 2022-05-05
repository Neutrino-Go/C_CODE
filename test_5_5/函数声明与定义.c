#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x = 1;
	int y = 2;

	int Add(int, int);//Function declerations

	int z = Add(x, y);

	printf("%d\n", z);

	return 0;
}
//The defention of the function
int Add(int a, int b)
{
	return a + b;
}