#include "main.h"

/**
 *_strchr - string char
 *@s: hello
 *@c: start l
 *Return: s or 0
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
