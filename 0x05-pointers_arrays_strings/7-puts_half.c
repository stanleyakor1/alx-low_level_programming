#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * puts_half - prints half of a string
 * @s: string
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *s)
{
	int n = strlen(s);
	int i = n / 2;

	while (i < n )
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}
