#include "main.h"

/**
* print_chessboard - this function prints a chessboard
* @a: a pointer to the square to print
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putcahr(a[i][j]);
		}
		_putchar('\n');
	}
}
