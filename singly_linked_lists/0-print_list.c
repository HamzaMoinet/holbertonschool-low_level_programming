#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - Function for print a list
 * @h: pointer
 * Return: Return a count
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	h = h->next;
	node++;
	}
	return (node);

}
