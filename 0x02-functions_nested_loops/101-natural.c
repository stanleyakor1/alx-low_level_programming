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
	int s = 0, j = 1, i = 1, x = 3, y = 9;
	
	while ( x < 1024)
	{
		x = x * i;
		s = s + x;
		i++;
	}

	while (y < 1024)
	{
		y  = y * i;
		s  = s + y;
		j++;
	}
	
	printf("%d \n",s);
	return (0);
}
