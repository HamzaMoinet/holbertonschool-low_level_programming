#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create an array
 *@size: size
 *@c: c
 *Return: Null and array
 */
 char *create_array(unsigned int size, char c)
 {
	char *array;
	unsigned int a;

	array = malloc(size);
	if (size == 0)
	{
		return (NULL);
	}

	if (array == 0)
	{
		return (NULL);
	}

	for (a = 0; a <= size; a++)
	{
		array[a] = c;
	}
	
	return (array);
 }
