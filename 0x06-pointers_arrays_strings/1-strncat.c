#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _strcat- returns length of the string
 * @dest: string
 * @src: string
 * @n : length of char to be concatenated
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);

	while (*src && n > 0)
	{
		dest[i] = *src;
		src++;
		i++;
		n--;
	}
	dest[i++] = '\0';
	return (dest);
}
