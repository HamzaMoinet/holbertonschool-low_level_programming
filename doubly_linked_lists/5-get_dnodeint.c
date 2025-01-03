#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: pointer to the head of the list
* @index: Index of the node to retrieve
* Return: Pointer to the nth node or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
