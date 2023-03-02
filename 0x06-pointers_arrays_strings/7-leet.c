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
	char leet_chars[] = "AEGOTL";
	char leet_nums[] = "436017";
	int i;

	while (*a)
	{
		i = 0;
		while (leet_chars[i])
		{
			if (*a == leet_chars[i] || *a == leet_chars[i] + 32)
			{
				*a = leet_nums[i];
				break;
			}
			i++;
		}
		a++;
	}
	return (ptr);
}
