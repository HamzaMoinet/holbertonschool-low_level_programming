#include "main.h"
/**
 *_puts - putch une phrase
 *@str: phrase
*/
void _puts(char *str)
{
	int a = 0;

	while (*str != '\0')
	{
		_putchar(str[a]);
		str++;
	}
	_putchar('\n');
}
