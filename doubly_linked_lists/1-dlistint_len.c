#include "lists.h"

/**
 *dlistint_len - function that print all elements of a list
 *@h: the head node
 *Return: the number of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
