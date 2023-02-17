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
	letter ='a';
	while(letter<='z')
	{
	
	if((letter!='e')&&( letter!='q'))
	{
		putchar(letter);
	}
	letter++;
	}
	putchar('\n');

        return (0);
}
