#include "main.h"
#include <stddef.h>
/* betty style doc for function main goes there */
/**
 * _strchr-  function that locates a character in a string.
 * @s: string pointer
 * @c: char
 * Return: Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
