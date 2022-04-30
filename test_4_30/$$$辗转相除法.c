#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int t = 0;
	while (t = n % m)
	{
		n = m;
		m = t;
	}
	printf("The greatest common divisor is: %d", m);

	return 0;
}