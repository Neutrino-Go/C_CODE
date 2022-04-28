#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//Wanted
	//Search k in arr
	int sz = sizeof(arr) / sizeof(arr[0]);//The number of elements of the array
	int mid = 0;
	int left = 0;
	int right = sz-1;
	
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("Founded, subscript: %d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("Can't find it.\n");
	return 0;
}