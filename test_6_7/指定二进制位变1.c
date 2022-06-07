#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 13;
	//Change the position of 5 in the binary of a to 1
	a = a | (1 << 4);
	printf("a = %d\n",a);
	//00000000000000000000000000001101
	//00000000000000000000000000010000
	//00000000000000000000000000011101
	
	//Change the position of 5 in the binary of a to 0
	a = a & ~(1 << 4);
	printf("a = %d\n", a);
	//00000000000000000000000000011101
	//11111111111111111111111111101111
	//00000000000000000000000000010000
	//00000000000000000000000000001101
	
	return 0;
}