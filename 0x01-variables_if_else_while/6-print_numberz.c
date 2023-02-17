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
	int num;

	num = 0;
	while (num <= 9)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
