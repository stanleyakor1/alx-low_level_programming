#include "main.h"

/**
 * print_diagonal - prints a diagonal line n times
 * @n: integer
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		do {
			j = 0;
			do {
				_putchar(' ');
				j++;
			} while (j < i); 
			_putchar(92);
			_putchar('\n');
			i++;
		} while (i < n);
	}
}
