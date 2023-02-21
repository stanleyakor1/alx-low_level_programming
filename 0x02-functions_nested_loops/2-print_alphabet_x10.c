#include "main.h"
/**
 * print_alphabet_x10 - Prints _putchar as a message.
 * Description: It prints the characters _putchar.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int n = 0;

	do {
		do {
			_putchar(alpha);
			alpha++;
		} while (alpha <= 'z');
		_putchar('\n');	
		alpha = 'a';
		n++;
	} while (n <= 9);
}
