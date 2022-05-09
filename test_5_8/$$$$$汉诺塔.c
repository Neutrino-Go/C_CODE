#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void move(int n, char Source, char Target)
{
	static int counter = 1;
	printf("%d : %d -- %c -- %c\n", counter, n, Source, Target);
	counter++;
}

void hanoi(int n, char Source, char Auxiliary, char Target)
{
	if (n == 1)
		move(n, Source, Target);
	else
	{
		hanoi(n - 1, Source, Target, Auxiliary);
		move(n, Source, Target);
		hanoi(n - 1, Auxiliary, Source, Target);
	}
}

int main()
{
	int n = 0;
	printf("Please enter the number of disks: ");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}