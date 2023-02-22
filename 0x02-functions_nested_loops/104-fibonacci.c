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
	unsigned long x1 = 1;
	unsigned long x2 = 1;
	unsigned long x3 = 0;
	long t1, t2, h1, h2, x3_h, x3_t;
	int i = 2, bust;

	printf("1");

	while (i < 93)
	{
		x3 = x1 + x2;
		i++;
		printf(", %lu", x3);
		x1 = x2;
		x2 = x3;
	}

	h1 = x1 / 1000000000;
	t1 = x1 % 1000000000;
	h2 = x2 / 1000000000;
	t2 = x2 % 1000000000;

	while (i < 99)
	{
		bust = (t1 + t2) / 1000000000;
		x3_t = (t1 + t2) - (1000000000 * bust);
		x3_h = (h1 + h2) + bust;
		i++;
		printf(", %lu%09lu", x3_h, x3_t);

		h1 = h2;
		t1 = t2;
		h2 = x3_h;
		t2 = x3_t;
	}


	printf("\n");

	return (0);
}
