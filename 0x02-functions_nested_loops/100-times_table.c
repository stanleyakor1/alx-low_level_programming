#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int x, y, z, mid;

	if( n < 0 || n > 15)
	{
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (z < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + z);
				}
				else if (z >= 10 && z < 100)
				{
					_putchar(' ');
					_putchar('0' + z / 10);
					_putchar('0' + z % 10);
				}
				else 
				{
					mid = z / 10;
					_putchar('0' + z / 100);
					_putchar('0' + mid % 10);
					_putchar('0' + z % 10);
				}
				if ( y <= n-1)
				{
					_putchar(',');
				}
				_putchar(' ');
			}
			_putchar('\n');

		}
	}
}

