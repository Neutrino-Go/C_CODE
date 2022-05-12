#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "bit";
	char arr2[] = { 'b', 'i', 't' };//The values before and after the bit are random
	printf("%s\n%s\n", arr1, arr2);
	printf("%d\n%d\n", strlen(arr1), strlen(arr2));
	return 0;
}