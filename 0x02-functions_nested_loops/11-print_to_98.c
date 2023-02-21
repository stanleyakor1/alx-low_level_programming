#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check the code.
 *@n: starting value
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i, end = 98;
	
	for (i = n; i <= end; i++)
	{
		printf("%d",i);
		if (i < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
