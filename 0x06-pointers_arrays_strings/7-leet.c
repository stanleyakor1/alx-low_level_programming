#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * leet - converts string to num
 * @ptr: pointer
 * Return: Always 0 (Success)
 */
char *leet(char *ptr)
{	
	char *a = ptr;
	char leet_chars[] = "AaEeGgOoTtLl";
	char leet_nums[] = "443366007711";
	int i;

	while (*a)
	{
		for (i = 0; i < 12; i++)
		{
			if (*a == leet_chars[i])
			{
				*a = leet_nums[i];
				break;
			}
		}
		a++;
	}
	return (ptr);
}
