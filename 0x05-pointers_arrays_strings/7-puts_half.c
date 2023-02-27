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
	int i;

	if (n % 2 == 0)
	{
		for (i = n / 2; i < n; i++)
		{
			putchar(s[i]);
		}
	}
	else
	{
		for (i = (n - 1) / 2 + 1; i < n; i++)
		{
			putchar(s[i]);
		}
	}
	putchar('\n');
}
