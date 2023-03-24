#include "variadic_functions.h"
/**
 * print_all-  prints all the enteries in of the function.
 * @format: format of operation
 * Return: Returns nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char c;
	int i;
	float f;
	char *s;
	int j = 0;

	va_start(ap, format);
	while (format[j])
	{
		switch(format[j])
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c, ", c);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d, ", i);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f, ", f);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					printf("(nil)");
				if (s)
					printf("%s", s);
				break;
		}
		j++;
	}

	printf("\n");
	va_end(ap);
}
