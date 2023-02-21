#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_sign - prints the sign of a number
 * @n - The input
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{	
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
