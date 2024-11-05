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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s);
		if (!s[i])
			return (0);
		i++;
	}
	return (0);
}
