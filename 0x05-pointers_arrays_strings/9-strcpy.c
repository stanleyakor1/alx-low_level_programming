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

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
