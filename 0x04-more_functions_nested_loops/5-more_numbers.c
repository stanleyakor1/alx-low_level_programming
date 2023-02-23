#include "main.h"
/**
 * print_alphabet_x10 - Prints _putchar as a message.
 * Description: It prints the characters _putchar.
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int alpha = 0;
	int n = 0;

	do {
		do {
			if (alpha < 10)
			{
				_putchar('0' + alpha);
			}
			else
			{
				_putchar('0' + alpha / 10);
				_putchar('0' + alpha % 10);
			}
			alpha++;
		} while (alpha <= 14);
		_putchar('\n');
		alpha = 0;
		n++;
	} while (n <= 10);
}
