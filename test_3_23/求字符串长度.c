#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c'};//not include '/0', the strlen(arr2) will give any number
	int len = strlen("abc");
	printf("%d\n%d\n%d\n", strlen(arr1), strlen(arr2), len);

	return 0;
}