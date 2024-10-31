#include "main.h"
/**
 *_puts - putch une phrase
 *@str: phrase
*/
void puts2(char *str)
{
	int a = 0;

	while (*str != '\0')
	{
		_putchar(str[a]);
		str += 2;
	}
	_putchar('\n');
}
