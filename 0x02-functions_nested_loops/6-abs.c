#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _abs - Entry point
 * n - input
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
		return (-1*n);
	else if (n > 0)
		return (n);
	else
		return (0);
}
