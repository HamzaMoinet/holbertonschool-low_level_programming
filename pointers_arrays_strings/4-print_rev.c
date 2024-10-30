#include "main.h"
#include "2-strlen.c"
/**
 *print_rev - print reverseble
 *@s: phrase
 *
*/

void print_rev(char *s)
{
	int a = 0;

	for (a = _strlen(s); a > 0; a--)
	{
		_putchar(s[a]);	
	}
	_putchar('\n');
}
