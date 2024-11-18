#include "function_pointers.h"
#include <stdlib.h>


/**
 * array_iterator - executes function given as parameter on each element
 *  of an array
 * @array: is a function
 * @size: size of the array
 * @action: pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
		action(array[i]);
}
