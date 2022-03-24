#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}

	printf("\n");

	char ch[5] = { 'a','b','c' };
	int j = 0;
	while (j < 5)
	{
		printf("%c ", ch[j]);
		j++;
	}

	return 0;
}