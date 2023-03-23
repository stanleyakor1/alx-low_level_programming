#include "variadic_functions.h"
/* betty style doc for function main goes there */
/**
 * sum_them_all-  sum all the enteries in of the function.
 * @n: number of elements to be added
 * Return: Returns the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int total = 0, i = 0;
	va_list ap;
	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		total += va_arg(ap, int);
	va_end(ap);
	return (total);
}
