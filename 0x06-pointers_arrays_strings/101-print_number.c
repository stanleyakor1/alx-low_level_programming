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
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
