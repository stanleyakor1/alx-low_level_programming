#include "lists.h"
/**
 *print_list - prints the elements  of a list
 *@h : pointer to the structure
 *Return: The number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
