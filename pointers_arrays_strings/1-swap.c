#include "main.h"

/**
 *swap_int - swap integers
 *@a: integers 1
 *@b: integers 2
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
