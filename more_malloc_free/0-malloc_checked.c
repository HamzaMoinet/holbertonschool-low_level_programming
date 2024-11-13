#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check malloc
 *@b: b
 *Return: return p
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

		if (ptr == NULL)
			exit (98);

	return (ptr);
}
