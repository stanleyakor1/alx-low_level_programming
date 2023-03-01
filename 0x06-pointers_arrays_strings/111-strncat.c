#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _strncat- returns length of the string
 * @dest: string
 * @src: string
 * @n: byte length
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*dest)
	{
		dest++;
	}
	while (*src && n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}
