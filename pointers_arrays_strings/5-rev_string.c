#include "main.h"
#include "2-strlen.c"
/**
 *rev_string - print reverseble
 *@s: phrase
 *
*/

void rev_string(char *s)
{
	int a, len = _strlen(s) - 1;
	char tmp;

	for (a = 0; a < (_strlen(s) / 2); a++)
	{
		tmp = s[a];
		s[a] = s[len];
		s[len] = tmp;
		len--;
	}
}

