#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Sub.h"
//���뾲̬��
#pragma comment(lib,"��������Ա.lib")

int main()
{
	int a = 10;
	int b = 20;

	int c = Sub(a, b);

	printf("%d\n", c);

	return 0;
}