#include <stdio.h>
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * main- multiply two numbers
 * @argc: number of input arguments
 * @argv: array of input arguments
 * Return: result of multiplication
 */
int main(int argc, char ** argv)
{
	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
