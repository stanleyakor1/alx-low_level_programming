#include "main.h"
/* betty style doc for function main goes there */
/**
 * is_prime_number-  checks if number is prime.
 * more- helper function
 * @n: number
 * @i: integer
 * Return: prints if prime, 0 otherwise.
 */
int more(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (more(n, i - 1));
}
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (more(n, n - 1));
}
