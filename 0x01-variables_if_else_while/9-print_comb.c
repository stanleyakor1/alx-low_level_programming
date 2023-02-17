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
	int n = 0;

	do {
		putchar('0' + n);
		n++;
	if (n <= 9)
	{
		putchar(',');
	}
	} while (n <= 9);
	putchar('\n');
	return (0);
}
