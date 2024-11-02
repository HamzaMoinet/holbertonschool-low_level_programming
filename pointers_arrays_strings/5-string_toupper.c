#include "main.h"

/**
 *string_toupper - fonction that changes all lowercase letter to uppercase
 *@a: char
 *Return: a
*/

char *string_toupper(char *a)
{
	int b;

	for (b = 0; a[b] != '\0'; b++)
	{
		if (a[b] >= 'a' && a[b] <= 'z')
			a[b] = a[b] - 'a' + 'A';
	}
	return (a);
}
