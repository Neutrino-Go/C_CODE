#define _CRT_SECURE_NO_WARNINGS 1
//Find the max
#include<stdio.h>

int main()
{
	//设立数组
	int arr[10] = { 0 };

	//输入
	int i = 0;
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	
	//找出最大值
	int max = arr[0];//假设数组的第一个元素为最大值
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	//输出
	printf("%d", max);

	return 0;
}