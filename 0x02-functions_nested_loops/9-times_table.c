#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		_putchar('0' + 0);
		for (y = 1; y < 10; y++)
		{
			z = x * y;
			_putchar(',');
			_putchar(' ');
			if (z / 10 == 0)
			{
				_putchar(' ');
				_putchar('0' + z);
			}
			else
			{
				_putchar('0' + z / 10);
				_putchar('0' + z % 10);
			}
		}
		_putchar('\n');

	}
}
