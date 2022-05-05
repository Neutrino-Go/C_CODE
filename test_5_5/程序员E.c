#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Sub.h"
//导入静态库
#pragma comment(lib,"减法程序员.lib")

int main()
{
	int a = 10;
	int b = 20;

	int c = Sub(a, b);

	printf("%d\n", c);

	return 0;
}