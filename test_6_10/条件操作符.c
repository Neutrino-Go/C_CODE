#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 0;

	if (a > 5)
		b = 1;
	else
		b = -1;
	printf("b = %d\n", b);

	//Trinmuth operator
	b = (a > 5 ? 1 : -1);
	printf("b = %d\n", b);

	
	return 0;
}