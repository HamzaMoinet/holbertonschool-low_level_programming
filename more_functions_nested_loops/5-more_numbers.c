#include "main.h"

/**
 * more_numbers - more numbers
 *
*/

void more_numbers(void)
{
	int i = 0, num;

	while (i < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 10)
				_putchar((num / 10) + '0');

			_putchar((num % 10) + '0');
		}
		i++;
		_putchar('\n');
	}
}
