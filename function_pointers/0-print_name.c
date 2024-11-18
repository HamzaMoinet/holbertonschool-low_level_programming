#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that print the name
 *
 * @name: is a function
 * @f: pointer of function name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
	{
		return;
	}
	f(name);
}
