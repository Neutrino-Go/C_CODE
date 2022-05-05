#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Add(int* pn)
{
	(*pn)++;
}

int main()
{
	int num = 0;

	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	return 0;
}