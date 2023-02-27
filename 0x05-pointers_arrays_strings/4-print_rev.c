#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * print_rev - returns length of the string
 * @s: string
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int n = strlen(s);
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
