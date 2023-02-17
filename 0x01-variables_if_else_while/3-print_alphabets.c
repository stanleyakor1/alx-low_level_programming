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
	char letter;
	char Let;

	letter = 'a';
	Let = 'A';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (Let <= 'Z')
	{
		putchar(Let);
		Let++;
	}
	putchar('\n');
	return (0);
}
