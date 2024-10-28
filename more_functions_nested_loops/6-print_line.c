#include "main.h"

/**
 * print_line - print a line with _
 *@n : n is the number of times the character _ should be printed
 *@line : line
*/

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
