#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x = 1, y = 2, init;
	int i = 0;
	
	printf("%li", x);
	printf(", ");
	printf("%li", y);
	printf(", ");
	while (i < 48)
	{
		init = x + y;
		if (i < 47)
		{
			printf("%li", init);
			printf(", ");
		}
		else
		{
			printf("%li", init);
		}
		x = y;
		y = init;
		i++;
	}
	printf("\n");
	return (0);
}
