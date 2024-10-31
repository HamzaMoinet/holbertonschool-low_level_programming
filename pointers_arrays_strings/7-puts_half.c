#include "main.h"
#include "2-strlen.c"
/**
 *puts_half - putch une phrase
 *@str: phrase
*/
void puts_half(char *str)
{
	int a, b;

	b = _strlen(str) - 1;
	for (a = 0; a <= b; a++)
	{
		if (a > b / 2)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
