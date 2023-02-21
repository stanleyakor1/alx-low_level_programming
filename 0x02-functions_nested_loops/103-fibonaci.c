#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	long int x = 1, y = 2, init = 0, S = 2;
	int i = 0;

	while (init <= 4e6 )
	{
		init = x + y;
		if (init % 2 == 0)
		{
			S = S + init;
		}
		x = y;
		y = init;
		i++;
	}
	printf("%li",S);
	printf("\n");
}
