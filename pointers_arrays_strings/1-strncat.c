#include "main.h"
#include "2-strlen.c"
/**
 *_strncat - strncat
 *@dest: dest
 *@src: src
 *@n: n
 *Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int a = _strlen(dest);
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';

	return (dest);
}
