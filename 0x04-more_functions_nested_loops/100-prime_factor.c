#include <stdio.h>

/**
 * main - checks largest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long p;

	for (p = 2; p <= n; p++)
	{
		while (n % p == 0)
		{
			n /= p;
			p--;
		}
	}
	printf("%ld\n", p);
	return (0);
}
