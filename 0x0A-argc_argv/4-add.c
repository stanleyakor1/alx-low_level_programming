#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* betty style doc for function main goes there */
/**
 * main- sum input integers
 * @argc: number of input arguments
 * @argv: array of input arguments
 * Return: result of sum
 */
int main(int argc, char *argv[])
{
	int s = 0, i;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				printf("%s\n", "Error");
				return (1);
			}
			s += atoi(argv[i]);
		}
		printf("%d\n", s);
	}
	return (0);
}
