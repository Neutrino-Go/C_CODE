#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define Max 1000
#define Add(X,Y) ((X)+(Y))
#define Ad(I,J) I+J
int main()
{
	printf("%d\n", Max);
	printf("%d\n", 4 * Add(2, 3));
	printf("%d\n", 4 * Ad(2, 3));
	return 0;
}