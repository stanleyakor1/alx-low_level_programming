#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _strncpy - returns length of the string
 * @dest: string
 * @src: string
 * @n : length of char to be concatenated
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*src && n > i)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
