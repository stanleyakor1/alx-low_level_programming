#include "main.h"

/**
 * print_line - prints a straight line n times
 * @n: integer
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		do {
			_putchar(95);
			i++;
		} while (i < n);
		_putchar('\n');
	}
}
