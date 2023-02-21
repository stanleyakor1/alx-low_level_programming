#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int  min;
	int sec;

	min = 0;
	sec = 0;
	do {
		do {
			if (min < 10)
			{
				_putchar('0' + 0);
				_putchar('0' + min);
				_putchar(':');
			}
			else
			{
				_putchar('0' + (int) min / 10);
				_putchar('0' + min % 10);
				_putchar(':');
			}


			if (sec < 10)
			{
				_putchar('0' + 0);
				_putchar('0' + sec);
			}
			else
			{
				_putchar('0' + (int) sec / 10);
				_putchar('0' + sec % 10);
			}
			_putchar('\n');
			sec++;
		} while (sec <= 59);
		if (min != 23)
			sec = 0;
		min++;
	} while (min <= 23);
}
