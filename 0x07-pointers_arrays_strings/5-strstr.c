#include "main.h"
#include <stddef.h>
/* betty style doc for function main goes there */
/**
 * _strstr-  searh a string for any set of bytes
 * @haystack:string1
 * @needle : string2
 *Return: a pointer to the beginning of the located substring, or NULL if not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;

	while (*needle)
	{
		
		while (*p)
		{	
			if (*needle == *p)
			{
				return (p);
			}
			p++;
		}
		p = haystack;
		needle++;
	}
	return (NULL);
}