#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("                      \n");
	printf("       1.  Play       \n");
	printf("                      \n");
	printf("       0.  Exit       \n");
	printf("                      \n");
}

void game()
{
	//Programming games
	//1.Generate a rand number.
	//rand will return a number between 1~32767
	//Time-Timestamp
	int ret = rand()%100+1;//The remainder of %100 ranges from 0-99, then +1, the range changes to 1-100
	
	//2.Guess the number.
	int guess = 0;
	while (1)
	{
		printf("Guess the number: ");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("Too small\n");
		}
		else if (guess > ret)
		{
			printf("Too big\n");
		}
		else
		{
			printf("Congratulations! You got it!\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//Set the starting point
	do
	{
		menu();//Print the menu
		printf("Choose: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("Exit\n");
			break;
		default:
			printf("Wrong choice, try again\n");
			break;
		}
	} while (input);
	return 0;
}