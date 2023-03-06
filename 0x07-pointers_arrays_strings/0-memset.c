#include "main.h"
/* betty style doc for function main goes there */
/**
 * _memset- Similar to memset function, fills memory with a constant byte
 * @s: input
 * @b: input2
 * @n: size of bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	do {
		s[i] = b;
		i++;
	} while (i < n);
	return (s);
}
