#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array- creates an array and intializes it with special characters.
 * @size: the array size
 * @c: the pointer to the string
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *vec = (char *) malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	if (!vec)
	{
		return (NULL);
	}
	while (i < size)
	{
		vec[i] = c;
		i++;
	}
	return (vec);
}
