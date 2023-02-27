#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _strlen - returns length of the string
 * @s: string
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{	
	int i;
	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	
}
