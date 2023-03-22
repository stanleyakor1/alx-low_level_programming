#include "function_pointers.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
/**
 * print_name - writes the character c to stdout
 * @name: The character to print
 * @f: pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
/**
 * print_with_hello - writes the character c to stdout
 * @name: The character to print
 *
 * Return: Nothing
 */
void print_with_hello(char *name) 
{
	char *h = "Hello";
	while (*h)
	{
		_putchar(*h);
		h++;
	}
	_putchar('\n');
	while (*name)
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}
