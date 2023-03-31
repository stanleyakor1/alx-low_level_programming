#include <stdio.h>
#include <stdlib.h>
/**
 * print_text - function that prints message
 * Return: no return
 */

void __attribute__ ((constructor)) print_text()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

