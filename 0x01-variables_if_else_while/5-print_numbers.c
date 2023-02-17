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
	int n;

	n = 0;
	do{
		printf("%d", n);
		n++;
	} while (n != 10);
	printf("\n");
	return (0);
}
