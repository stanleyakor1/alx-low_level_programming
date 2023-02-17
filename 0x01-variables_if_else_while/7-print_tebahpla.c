#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char letter;
	letter ='z';
	while(letter>='a')
	{
	putchar(letter);
	letter--;
	}
	putchar('\n');
        return (0);
}
