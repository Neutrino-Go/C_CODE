#include <stdio.h>
int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)
	{
		//Judge whether y is a leap year
		//1.Being divisible by 4 and not being divisible by 100 is a leap year
		//2.Being divisible by 400 is a leap year
		if (y % 4 == 0)
		{
			if (y % 100 != 0)
				printf("%d ", y);
			count++;
		}
		if (y % 400 == 0)
		{
			printf("%d ", y);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}