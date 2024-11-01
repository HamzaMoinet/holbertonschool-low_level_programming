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
			return (-15);
		
		else if (s1[a] > s2[a])
			return (15);

		if (s1[a] == s2[a])
			a++;
	}
	return (0);
}
