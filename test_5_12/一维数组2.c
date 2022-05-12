#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//%p is printed in the format of the address -- Hexadecimal printing
int main()
{
	printf("%x\n", 0x12);
	printf("%p\n", 0x12);

	int arr[10] = { 0 };
	int i = 0;
	for(i = 0; i < 10;i++ )
	{
		printf("&arr[%d] = %p\n",i, &arr[i]);//1 byte is for 1 address, and 4 addresses in the middle represent 4 bytes
	}
	return 0;
}