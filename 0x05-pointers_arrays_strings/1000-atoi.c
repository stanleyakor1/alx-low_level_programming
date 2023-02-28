#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _atoi - mimicks the atoi function
 * @s: string pointer
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int integer = 0;
	int sign = 1;
	int digit;

	while (*s != '\0')
	{
		if (*s == '+')
		{
		}
		else if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			if (integer < -214748364 || (integer == -214748364 && digit == 8))
			{
				/* Integer underflow has occurred */
				integer = -2147483648;
				break;
			}
			else if (integer > 214748364 || (integer == 214748364 && digit > 7))
			{
				integer = 2147483647;
				break;
			}
			else
			{
				integer = integer * 10 + sign * digit;
			}
		}
		else if (integer != 0)
		{
			break;
		}
		s++;
	}
	return (integer);
}
