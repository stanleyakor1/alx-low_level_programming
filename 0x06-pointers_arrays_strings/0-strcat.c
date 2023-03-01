#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _strcat- returns length of the string
 * @dest: string
 * @src: string
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int n;

	n = strlen(dest);
	while (*src)
	{
		dest[n] = *src;
		src++;
		n++;
	}
	return (dest);
}
