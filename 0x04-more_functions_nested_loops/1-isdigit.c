#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isdigit - checks for digit in [0,9]
 * @n: int
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
