#include "main.h"
/* betty style doc for function main goes there */
/**
 * more_numbers - prints numbers 10 times
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i = 0;
	int num;

	while (i < 10)
	{
		num = 0;

		do {
			if (num >= 10)
			{
				_putchar('0' + num / 10);
			}
			_putchar('0' + num % 10);
			num++;
		} while ( num <= 14);
		_putchar('\n');
		i++;
	}
}
