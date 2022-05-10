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

void reverse_string(char* arr,int left,int right,char*tmp)
{
	if (left < right)
	{
		tmp[left] = arr[left];
		arr[left] = arr[right];
		arr[right] = '\0';
		reverse_string(arr, left+1, right-1, tmp);
		arr[right] = tmp[left];
	}
}

int main()
{
	char arr[] = "abcdef";
	int left = 0;
	int right = my_strlen(arr)-1;
	char tmp[20] = {0};
	reverse_string(arr,left,right,tmp);

	printf("%s\n", arr);
	return 0;
}