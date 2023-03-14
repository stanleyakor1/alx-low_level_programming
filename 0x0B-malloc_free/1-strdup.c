#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: pointer variable of type character
 * Return: pointer to the duplicated string or NULL if memory is insufficent
 */
char *_strdup(char *str)
{
	size_t i = 0;
	size_t str_len;
	char *str_copy;

	if (!str)
	{
		return (NULL);
	}
	str_len = strlen(str);
	str_copy = (char *) malloc(str_len + 1);
	while (*str)
	{
		str_copy[i] = *str;
		str++;
		i++;
	}
	return (str_copy);
}
