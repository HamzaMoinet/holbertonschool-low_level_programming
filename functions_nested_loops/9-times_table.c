#include "main.h"


/**
 *print_alphabet - prints the alphabet in lowercase, followed by a new line.
*/

void times_table(void)
{
	int nums, mult, calc_mult;

	for (nums = '0'; nums <= '9'; nums++)
	{
		_putchar('0');

		for (mult = '0'; mult <= '9'; mult++)
		{
			_putchar(',');
			_putchar(' ');

			calc_mult = nums * mult;

			if (calc_mult <= 9)
				_putchar(' ');
			else
				_putchar((calc_mult / 10) + '0');
			_putchar((calc_mult % 10) + '0');
		}
		_putchar('\n');
	}
}
