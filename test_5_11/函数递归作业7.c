#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int DigitSum(int num)
{
	if (num > 9)
	{
		return num%10 + DigitSum(num / 10);
	}
	else
		return num;

}

int main(void)
{
	int num = 1729;
	int sum = DigitSum(num);

	printf("%d\n", sum);

	return 0;
}