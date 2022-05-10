#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int my_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}

void reverse_string(char* arr)
{
	char tmp = *arr;
	int str = my_strlen(arr);//tmp & arr are just the formal parameters of this level of recursion
	*arr = *(arr + str - 1);
	*(arr + str - 1) = '\0';
	if (my_strlen(arr+1) >= 2)
		reverse_string(arr + 1);
	*(arr + str - 1) = tmp;
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);

	printf("%s\n", arr);

	return 0;
}