#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;//a allocates 4 bytes of space in memory
	printf("%p\n", &a);//%p is designed to print addresses
	int* pa = &a;//pa is used to store addresses, and in C pa is called pointer variable
	//* is used to show pa is pointer variable
	//int is used to indicate that the object executed by pa is of type int
	char ch = 'w';
	char* pc = &ch;

	int b = 10;
	int* pb = &b;
	*pb = 20;//* Dereference operation. *pb is a method to find b through the address in pb
	printf("%d\n", b);

	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;
}