#include "main.h"

/**
 *
 *
 *
 *
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0')
	{
		if (s1[a] < s2[a])
			return (s1[a] - s2[a]);
		if (s2[a] < s1[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
