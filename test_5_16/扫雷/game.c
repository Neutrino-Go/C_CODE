#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//Initialize the board
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//Display the board
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------Minesweeper game-----------\n");
	
	//Prints the column numbers
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}

	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------Minesweeper game-----------\n");
}

//Set mines
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//Set 10 mines
	int count = EASY_COUNT;
	while (count)
	{
		//Generate random subscripts
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//Calculate how many mines are there around x, y
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';

}

//Find mines
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.Enter the coordinates of the investigation
	//2.Check the coordinates for mines
	//(1) It's a mine -- You've been blown up -- Game Over
	//(2) It isn't a mine -- Calculating how many mines there are around -- Store the information of amounts of mines into array 'show', Game Contiune
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		int x = 0;
		int y = 0;

		printf("Please input the coordinate which you want to investigate: ");
		scanf("%d %d", &x, &y);

		//Judge the legality of the coordinate
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("You've been bloom up!\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//It isn't a mine, calculate the number of mines around x, y
				int count = get_mine_count(mine, x, y);
				show[x][y] = count+'0';
				//Display the information of Finding mines
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("The coordinate is illegal! Please input again: \n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("You win!\n");
		DisplayBoard(mine, row, col);
	}
}