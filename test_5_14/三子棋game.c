#define _CRT_SECURE_NO_WARNINGS 1

#include "Èý×ÓÆågame.h"

//Initialize the board
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			board[i][j] = ' ';
	}
}

//Display the board
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}

		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

//Gamer moves
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("Gamer Moves -->\n");
	while (1)
	{
		printf("Please enter the coordinates of the game of chess: ");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("Coordinates are occupied!\n");
			}

		}
		else
		{
			printf("The coordinates are illegal\n");
		}
	}
	
}

//Computer moves
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("Computer Moves -->\n");

	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;//x,y are randomly assigned a value of 0 to 2

		//Identify if it is occupied
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	
}

//Judge whether the board is full or not
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//The board is not full
		}
	}
	return 1;//The board is full
}

//Judge who wins
char IsWin(char board[ROW][COL],int row,int col)
{
	//1.Player wins -- *
	//2.Computer wins -- #
	//3.Draw -- Q
	//4.The game continue -- C
	
	int i = 0;
	//Judge ROW
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	//Judge COL
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

	//Judge diagnoal
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//Judge draw
	//Returns 1 if the board is full, 0 if it is not.
	int ret=IsFull(board,row,col);
	if (ret == 1)
	{
		return 'Q';
	}

	return 'C';
}