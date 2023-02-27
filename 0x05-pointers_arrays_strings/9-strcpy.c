#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * *_strcpy - copies a string
 * @src: source
 * @dest: destination
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int n = strlen(src);

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	i = i + 1;
	dest[i] = '\0';
	return (dest);
}
