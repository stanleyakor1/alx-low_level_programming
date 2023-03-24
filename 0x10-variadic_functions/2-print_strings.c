#include "variadic_functions.h"
/**
 * print_strings-  prints all the enteries in of the function.
 * @n: number of elements to be added
 * @separator: character between numbers
 * Return: Returns nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *))
			printf("%s", va_arg(ap, char *));
		else
			printf("%s", "(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
