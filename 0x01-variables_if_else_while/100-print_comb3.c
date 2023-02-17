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
	int x, y;
  	for (x = 0; x < 10; x++)
  	{
		for (y = x + 1; y < 10; y++)
		{
			putchar('0' + x);
			putchar('0' + y);
			if( x*y <72)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
