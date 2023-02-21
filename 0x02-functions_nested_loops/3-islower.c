#include "main.h"
/**
 * _islower - checks if the alphabet is lowr or upper case .
 * Description: It prints the characters _putchar.
 * @c: input number as an integer.
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
