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
	struct Book* pb = &b;

	printf("Name: %s\n", pb->name);
	printf("ID: %s\n", pb->id);
	printf("Price: %d\n", pb->price);

	return 0;
}