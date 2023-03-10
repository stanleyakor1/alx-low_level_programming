#include <stdio.h>
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * main-prints the input args.
 * @argc: number of input arguments
 * @argv: array of input arguments
 * Return: prints all the input arguments
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
