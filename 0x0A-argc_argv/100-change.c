#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * main- computes the number of coin to recieve as change
 * @argc: number of input arguments
 * @argv: array of input arguments
 * Return: number of coin
 */
int main(int argc, char *argv[])
{
	int num_coin = 0;
	int  change;

	if (argc < 2 || argc > 2)
	{
		printf("%s\n", "Error");
		return (1);
        }
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (change > 0)
	{
		if (change >= 25)
		{
			change -= 25;
			num_coin++;
		}
		else if (change >= 10)
		{
			change -= 10;
			num_coin++;
		}
		else if (change >= 5)
		{
			change -= 5;
			num_coin++;
		}
		else if (change >= 2)
		{
			change -= 2;
			num_coin++;
		}
		else if (change >= 1)
		{
			change -= 1;
			num_coin++;
		}
	}
	printf("%d\n", num_coin); 
	return (0);
}
