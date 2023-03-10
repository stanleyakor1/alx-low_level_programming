#include <stdio.h>
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * main-prints the number of input arguments.
 * @argc: number of input arguments
 * @argv: array of input arguments
 * Return: number of input
 */
int main(int argc, char *argv[])
{
	int i = 0;

	do {
		printf("%s\n", argv[i]);
		i++;
	} while (i < argc);
	return (0);
}
