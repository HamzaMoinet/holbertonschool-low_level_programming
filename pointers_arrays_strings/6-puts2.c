#include "main.h"
#include "2-strlen.c"
/**
 *_puts - putch une phrase
 *@str: phrase
*/
void puts2(char *str)
{
	int a;

	for (a = 0; a < _strlen(str); a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
