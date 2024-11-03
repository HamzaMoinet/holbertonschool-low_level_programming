#include "main.h"

/**
 *
 *
 *
 */

char *cap_string(char *a)
{
	int i, j;

	char s[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == s[j])

				s[i + 1] -= 32;
		}
	}
	return (a);
}
