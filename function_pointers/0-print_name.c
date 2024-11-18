#include <stdlib.h>

/**
 *print_name - print a nam
 *@name : Bob and BOB DYLAN
 *@f:
 *Return:
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
	{
		f(name);
	}
	return;
}
