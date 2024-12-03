#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *list_len - list len
 *@h: pointer of structure
 *Return: return nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
