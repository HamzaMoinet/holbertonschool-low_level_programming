#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * @brief
 *
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *a;
	va_list ap;

	va_start (ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		a = va_arg(ap, char*);
		if (a == NULL)
			a = "(nil)";
		printf("%s", a);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
