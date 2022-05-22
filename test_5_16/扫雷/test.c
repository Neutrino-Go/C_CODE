#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("************************************\n");
	printf("***********  1. P l a y  ***********\n");
	printf("************************************\n");
	printf("***********  0. E x i t  ***********\n");
	printf("************************************\n");
}

void game()
{
	char mine[ROWS][COLS]={0};//Store the laid-out information
	char show[ROWS][COLS]={0};//Store information about the detected mines

	//Initialize the board
	InitBoard(mine, ROWS, COLS, '0');//'0'
	InitBoard(show, ROWS, COLS, '*');//'*'

	//Display the board
	DisplayBoard(show, ROW, COL);

	//Set mines
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//Find mines
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Choose: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("E x i t\n");
			break;
		default:
			printf("Wrong choice. Please choose again\n");
			break;
		}
	} while (input);
	return 0;
}