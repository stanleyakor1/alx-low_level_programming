#include "main.h"

/**
 * print_diagonal - prints a diagonal line n times
 * @n: int
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		while (i < n)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			j = 0;
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
