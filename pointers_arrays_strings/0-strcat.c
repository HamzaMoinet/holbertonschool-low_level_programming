#include "main.h"
#include "2-strlen.c"

/**
 *_strcat - strcat
 *@dest: dest
 *@src: src
 *Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
