#include "lists.h"
/**
 *list_len - prints the elements  of a list
 *@h : pointer to the structure
 *Return: The number of nodes
 *
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		if (!h->str)
			return (count);
		else
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
