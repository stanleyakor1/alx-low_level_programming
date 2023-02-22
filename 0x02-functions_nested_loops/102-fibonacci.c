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
	long long int x = 1, y = 2, init;
	int i = 0;

	printf("%lli", x);
	printf(", "); 
	printf("%lli", y);
	printf(", ");
	while (i < 48 )
	{
		init = x + y;
		if (i < 47)
		{
			printf("%lli", init); 
			printf(", ");
		}
		else
		{
			printf("%lli", init);
		}
		
		x = y;
		y = init;
		i++;
	}
	printf("\n");
}
