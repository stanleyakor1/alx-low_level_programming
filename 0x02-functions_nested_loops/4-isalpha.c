#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isalpha - Entry point
 *@c: input number as an integer.
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
