#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch >> '9')//ch will compare with the character '0' and '9',
			continue;
		putchar(ch);//character between '0' and '9' will be output
	}
	return 0;
}