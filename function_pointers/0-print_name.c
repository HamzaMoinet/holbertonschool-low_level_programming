#include <stdlib.h>

/**
 *print_name - print a nam
 *@name : Bob and BOB DYLAN
 *@f: print nam
 *Return: return
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
	{
		return;
	}
	f(name);

}
