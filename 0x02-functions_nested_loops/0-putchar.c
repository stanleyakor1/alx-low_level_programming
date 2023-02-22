#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[8] = "_putchar";
	int n = 0;

	do {
		_putchar(a[n]);
		n++;
	} while (n < 8);
	_putchar('\n');
	return (0);
}
