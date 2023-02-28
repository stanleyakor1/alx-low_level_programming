#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /* main - entry point
 *
 * Return: generated password
 */
int main(void)
{
	char cha;
	int x;

	srand(time(0));
	do{
		cha = rand() % 128;
		x += cha;
		putchar(cha);
	} while (x <= 2645);
	putchar(2772 - x);
	return (0);
}
