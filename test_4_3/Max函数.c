#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);
	int m = Max(a, b);
	printf("%d\n", m);
	return 0;
}