#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print the last digit numbers
 * @n: The number of which the sign will be printed.
 *
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit +'0');
	return (last_digit);
}
