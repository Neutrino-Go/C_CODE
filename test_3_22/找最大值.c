#define _CRT_SECURE_NO_WARNINGS 1
//Find the max
#include<stdio.h>

int main()
{
	//��������
	int arr[10] = { 0 };

	//����
	int i = 0;
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	
	//�ҳ����ֵ
	int max = arr[0];//��������ĵ�һ��Ԫ��Ϊ���ֵ
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	//���
	printf("%d", max);

	return 0;
}