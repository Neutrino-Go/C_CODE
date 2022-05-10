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
	int left = 0;
	int right = my_strlen(arr)-1;

	while (left < right)
	{
		char tmp = arr[left];//Be equivalent to    *(arr+left)
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}

}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);

	printf("%s\n", arr);

	return 0;
}