#include "main.h"

/**
 * _memcpy - change memory with constant byte
 * @dest: pointer string destination
 * @src: pointer string source
 * @n: n bytes of memory pointed
 * Return: pointer to the memory dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int a;

	while (*src && a < n)
	{
		*p++ = src[a++];
	}
	return (dest);
}
