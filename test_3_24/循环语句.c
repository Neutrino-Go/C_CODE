#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int line = 0;
	while (line < 30000)
	{
		line++;
		printf("Write code:%d\n", line);
	}
	if (line == 30000)
	{
		printf("Good offer!\n");
	}
	return 0;
}