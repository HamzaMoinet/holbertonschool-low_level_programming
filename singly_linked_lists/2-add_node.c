#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: head of the list
 * @str: string to be add to the list
 * Return: the size of the string added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
