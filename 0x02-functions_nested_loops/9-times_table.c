#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int x,y,z;
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (z == 0)
			{
				if (y == 0)
					_putchar('0');
				else
				{
					_putchar(' ');
					_putchar('0');
				}
			}

			else if (z > 0 && z / 10 <= 0)
			{
				_putchar(' '); 
				_putchar('0' + z);
			}
			else
			{
				_putchar('0' + z / 10);
				_putchar('0' + z % 10);
			}
	
			if ( y <= 8)
			{
				_putchar(',');
			}
			_putchar(' ');
		}
		_putchar('\n');

	}
}

