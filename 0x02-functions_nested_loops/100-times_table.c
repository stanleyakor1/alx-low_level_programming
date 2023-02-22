#include "main.h"
/**
 * print_times_table - check the code
 *@n: size
 * Return: Always 0.
 */
void print_times_table(int n)
{	
	int x, y, z, mid;

	if (n < 0 || n > 15)
	{
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0' + 0);
			for (y = 1; y <= n; y++)
			{
				z = x * y;
				_putchar(',');
				_putchar(' ');
				if (z / 10 == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + z);
				}
				else if (z / 10 > 0 && z / 10 < 10)
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
			}
			_putchar('\n');
		}
	}
}
