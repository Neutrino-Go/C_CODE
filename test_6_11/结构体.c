#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct Book
{
	char name[20];
	char id[20];
	int price;
};

int main()
{
	struct Book b = { "C Language", "C 20220610", 55 };
	printf("Name: %s\n", b.name);
	printf("ID: %s\n", b.id);
	printf("Price: %d\n", b.price);

	return 0;
}