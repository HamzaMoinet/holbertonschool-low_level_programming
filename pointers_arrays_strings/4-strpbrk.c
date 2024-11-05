#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - start l
 *@s: hello, world
 *@accept: accept
 *Return: return s or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
