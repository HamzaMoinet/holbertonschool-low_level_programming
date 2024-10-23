#include "main.h"
#include <stdlib.h>

/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *folowed by a new line
*/
void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	while (i < 10)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
			_putchar(alpha);
		i++;
		_putchar('\n');
	}
}
