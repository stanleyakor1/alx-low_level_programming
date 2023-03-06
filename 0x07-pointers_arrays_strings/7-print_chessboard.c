#include "main.h"
/* betty style doc for function main goes there */
/**
 * _print_chessboard-  prints elements of a 2d array
 * @a:array
 *Return: void.
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
