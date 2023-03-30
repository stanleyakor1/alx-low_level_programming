#include "lists.h"
/**
 *list_t - add to a singly linked list
 *@head : pointer to the list
 *str : string pointer
 *Return: The new list
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *str_copy;
	size_t length;

	length = 0;
	if (!head || !str)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	str_copy = strdup(str);
	if (!str_copy)
	{
		free(newNode);
		return (NULL);
	}
	while (*Str)
	{
		length++;
	}
	newNode->str = str_copy;
	newNode->len = length;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
