#include "main.h"

/**
 *
 *
 *
*/

char *leet(char *i)
{
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char b[] = {4, 3, 0, 7, 1};
	char *r = i;
	int c;

	while (*i)
	{
		for (c = 0; c < 5; c++)
		{
			if (*i == a[c] || *i == a[c] - 32)
				*i = b[c] + '0';
		}
		i++;
	}
	return (r);
}
