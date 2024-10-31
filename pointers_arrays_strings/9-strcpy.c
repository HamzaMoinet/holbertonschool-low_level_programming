#include "main.h"
#include "2-strlen.c"
/**
 *_strcpy - copy a text
 *@dest: dest
 *@src: src
 *Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; a < _strlen(src); a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
