
#include "holberton.h"
/**
 * print_chessboard - function that prints an array of pieces that
 * are located on the chessboard
 * @a: pieces and location on chess board
 * aka 2d array of pieces
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int w, b;
/* In main, we see that pointer a is a 2d array : char board[8][8] */
	for (w = 0; w < 8; w++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[w][b]);
		}
		_putchar('\n');
	}
}
