#include "main.h"
#include <stdio.h>

/**
 *_isdigit - check for digit (0-9)
 *
 *@c: the number to be checked
 *Return: 1 is digit or 0 is otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
