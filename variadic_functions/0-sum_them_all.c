#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - sum of all parameters
 *@n: element
 *Return: void
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start (ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg (ap, int);
	}
	va_end (ap);
	return (sum);
}
