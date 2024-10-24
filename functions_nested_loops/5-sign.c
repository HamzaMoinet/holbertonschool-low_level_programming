#include "main.h"
#include <stdlib.h>

/**
 *_islower - Checks if a character is lowercase.
 *@n : variable 'n' print a number
 *Return: 1 if greater than zero
 *        0 if egal than zero
 *        -1 less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
