#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_number - print any number
 * @n: integer
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}
