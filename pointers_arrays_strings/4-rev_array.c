#include "main.h"

/**
 *
 *
 *
 *
*/

void reverse_array(int *a, int n)
{
	int b, tmp;

	for (b = 0; b < n; b++)
	{
		tmp = a[b];
		a[b] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
