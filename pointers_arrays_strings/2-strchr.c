#include "main.h"
#include <stdio.h>
/**
 *_strchr - string char
 *@s: hello
 *@c: start l
 *Return: s or 0
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (0);
		s++;
	}
	return (0);
}
