#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string to add at the end
 * Return: a list_t value
 */
list_t *add_node_end(list_t **head, const char *str)
{
		list_t *new_node;
	unsigned int len = 0;
	list_t *last_node = *head;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
/* end list */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;

	return (new_node);
}
