#include "main.h"

/**
 *print_diagonal - print a diagonal
 *@n : the number of
*/

void print_diagonal(int n)
{
	int lin, diag;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
		{
			for (diag = 0; diag < lin; diag++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
