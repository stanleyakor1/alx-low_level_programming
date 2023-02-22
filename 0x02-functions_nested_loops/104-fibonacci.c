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
	long unsigned int x = 1, y = 2, init;
	int i = 0;

	printf("%lu", x);
	printf(", "); 
	printf("%lu", y);
	printf(", ");
	while (i < 98 )
	{
		init = x + y;
		if (i < 97)
		{
			printf("%lu", init); 
			printf(", ");
		}
		else
		{
			printf("%lu", init);
		}
		
		x = y;
		y = init;
		i++;
	}
	printf("\n");
	return (0);
}
