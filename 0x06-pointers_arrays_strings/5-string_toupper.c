#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * string_toupper - reverses an array
 * @a: pointer
 * Return: Always 0 (Success)
 */
char *string_toupper(char *a)
{
	while (*a)
	{
		if (*a >= 'a' && *a<= 'z')
			*a = *a - 'a' + 'A';
		a++;
	}
	return (a);
}
