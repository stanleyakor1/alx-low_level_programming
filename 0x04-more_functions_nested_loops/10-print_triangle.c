#include "main.h"

/**
 * print_triangle - prints triangle.
 * @size: integer
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i = 1, k = 0;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		while (i < size)
		{
			j = 1;

			while (j <= size)
			{
				if (j <= size - i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	while (k < size)
	{
		_putchar(35);
		k++;
	}
	_putchar('\n');
}
