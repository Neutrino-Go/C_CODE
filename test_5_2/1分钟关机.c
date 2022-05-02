//shutdown -s -t 60
//shutdown -a
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	//The C language provides function: system() to execute system commands
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("Attention!!! Your computer will shutdown in one minute, input: Terminate to cancel the shutdown.\n");
		scanf("%s", input);
		if (strcmp(input, "Terminate") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}