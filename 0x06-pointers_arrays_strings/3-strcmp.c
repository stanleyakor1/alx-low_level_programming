#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _strcmp - returns length of the string
 * @s1: string
 * @s2: string
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int i = 0;
	int l1 = strlen(s1);
	int l2 = strlen(s2);

	while (*s1 && *s2)
	{	
		if (s1[i] == s2[i])
			count++;
		s1++;
		s2++;
		i++;
	}
	if (count == l1 && count == l2)
		return (0);
	else if (s1[0] > s2[0])
		return (15);
	else
		return (-15);
}
