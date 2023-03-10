#include <stdio.h>
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * main-prints the input args.
 * @argc: number of input arguments
 * @argv: array of input arguments
 * Return: prints all the input arguments
 */
int main(int argc, char** argv)
{
	int i = 0;

	do 
	{
		printf("%s\n",argv[i]);
		i++;
	} while (i < argc);
	return (0);
}
