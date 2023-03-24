#include "variadic_functions.h"
/**
 * print_numbers-  prints all the enteries in of the function.
 * @n: number of elements to be added
 * Return: Returns nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;


	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (separator && i < n - 1)
				printf("%s", separator);
		}
		va_end(ap);
		printf("\n");

	}
}
