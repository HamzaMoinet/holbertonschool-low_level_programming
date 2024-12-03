#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * @brief
 *
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
