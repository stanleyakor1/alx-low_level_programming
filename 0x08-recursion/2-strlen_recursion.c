#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strlen_recursion-  computes the length of a string.
 * @s: string pointer
 * Return: The length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));

}
