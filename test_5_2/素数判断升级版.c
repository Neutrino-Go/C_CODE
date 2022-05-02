#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int flag = 1;//Assume i is prime number
		for (j = 2; j <= sqrt(i); j++)//sqrt is a function that open squares
		{
			if (i % j == 0)
			{
				flag = 0;//i isn't prime number
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}