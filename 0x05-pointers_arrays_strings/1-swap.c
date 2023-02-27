#include "main.h"
/* betty style doc for function main goes there */
/**
 * swap_int - swaps a with b
 * @a: a
 * @b: b
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a,int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}
