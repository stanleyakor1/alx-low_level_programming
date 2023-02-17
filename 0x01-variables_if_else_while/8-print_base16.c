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
	char n;
	char letter='a';

	n = '0';
	do {
		putchar(n);
		n++;
	} while (n <= '9');
	do {
		putchar(letter);
		letter++;
	} while (letter <= 'f');
	putchar('\n');
	return (0);
}
