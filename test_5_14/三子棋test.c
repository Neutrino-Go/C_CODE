#define _CRT_SECURE_NO_WARNINGS 1

#include "Èý×ÓÆågame.h"

void game()
{
	//Storing Data¡ª¡ªTwo dimensional arrays
	char board[ROW][COL];
	//Initialize the board¡ª¡ªInitialized to spaces
	InitBoard(board, ROW, COL);
	//Display the board (print the contents of an array in essence)
	DisplayBoard(board, ROW, COL);

	//Discraminating game state
	char ret = 0;

	while (1)
	{
		//Gamer moves
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//Determine whether player wins
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//Computer moves
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//Determine whether computer wins
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("Player wins!\n");
	}
	else if (ret == '#')
	{
		printf("Computer wins!\n");
	}
	else
	{
		printf("Draw!\n");
	}
	DisplayBoard(board, ROW, COL);

}

void menu()
{
	printf("*************************************\n");
	printf("***********  1 . P l a y  ***********\n");
	printf("*************************************\n");
	printf("***********  0 . E x i t  ***********\n");
	printf("*************************************\n");
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
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("E x i t\n");
			break;
		default:
			printf("Please input the right choice!\n");
			break;
		}
	} while (input);

	return 0;
}