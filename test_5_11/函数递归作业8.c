#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

double Pow(int n, int k)
{
	if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else if (k < 0)
		return 1.0 / Pow(n, -k);
	else
		return 1.0;
}

int main()
{
	int n = 0;
	int k = 0;
	printf("Please enter the number and the times of square: ");
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);

	printf("%lf\n", ret);

	return 0;
}