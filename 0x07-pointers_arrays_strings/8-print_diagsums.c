#include "main.h"
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_diagsums-  prints the sum of the diagonals of a 2d array
 * @a:array
 * size: size of the array
 *Return: void.
*/
void print_diagsums(int *a, int size)
{
	unsigned int n = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if(j ==i)
			{
				n += *(a + i*size +j);
			}
		}
	}
	printf("%u",n);
}
