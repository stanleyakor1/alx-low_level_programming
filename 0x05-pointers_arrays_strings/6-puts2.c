#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * puts2 - reverses a string
 * @s: string
 *
 * Return: Always 0 (Success)
 */
void puts2(char *s)
{
	int n = strlen(s);
	int i = 0;

	while (i <= n - 1)
	{
		putchar(s[i]);
		i = i + 2;
	}
	putchar('\n');
}
