#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strlen_recursion-  prints a string in reverse order.
 * @s: string pointer
 * Return: prints a string using recursion.
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
