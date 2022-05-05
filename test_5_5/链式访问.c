#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{

	printf("%d\n", strlen("abc"));

	char arr1[20] = { 0 };
	char arr2[] = "abc";
	printf("%s\n", strcpy(arr1, arr2));

	printf("%d", printf("%d", printf("%d", 43)));//printf Return Value: Each of these functions returns the number of characters printed, or a negative value if an error occurs.

	return 0;
}