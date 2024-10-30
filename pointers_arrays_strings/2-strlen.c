#include "main.h"

/**
 *_strlen - strlen
 *@s: s
 *Return: a
*/
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}
