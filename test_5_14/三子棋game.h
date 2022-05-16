#define _CRT_SECURE_NO_WARNINGS 1
//Header file contains
#include <stdio.h>
#include <stdlib.h> //srand
#include <time.h>//time

//Defeniton of the symbol
#define ROW 3
#define COL 3

//The declaration of the function

//Initialize the board
void InitBoard(char board[ROW][COL], int row, int col);

//Display the board
void DisplayBoard(char board[ROW][COL], int row, int col);

//Gamer moves
void PlayerMove(char board[ROW][COL], int row, int col);

//Computer moves
void ComputerMove(char board[ROW][COL], int row, int col);

//Judge who wins
char IsWin(char board[ROW][COL], int row, int col);