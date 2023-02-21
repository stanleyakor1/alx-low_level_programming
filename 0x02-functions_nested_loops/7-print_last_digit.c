#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_last_digit - Entry point
 * @n: digit
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{	
	int x;

	x = n % 10;
	if (x < 0 )
	{
		_putchar('0' + -x);
		return (-x);
	}
	else
	{
		_putchar('0' + x);
		return (x);
	}
}
