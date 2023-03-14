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

	if (str == NULL)
	{
		return (NULL);
	}

	str_len = strlen(str);
	str_copy = (char *) malloc(str_len + 1);
	if (str_copy == NULL)
	{
		return (NULL);
	}
	while (i <= str_len)
	{
		str_copy[i] = str[i];
		i++;
	}
	return (str_copy);
}
