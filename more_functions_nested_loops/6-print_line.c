#include "main.h"

/**
 *print_line - print a line  
 *@n : n is the number of times the character 
*/

void print_line(int n)
{
	int lin;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
			_putchar('_');
	}
	_putchar('\n');
}
