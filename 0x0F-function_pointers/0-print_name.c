#include "function_pointers.h"
/**
 * print_name - writes the character c to stdout
 * @name: The character to print
 * @f: pointer to function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
