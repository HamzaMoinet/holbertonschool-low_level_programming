#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return pointer to newly allocated space in memory
 * which containt copy of string given as parameter
 * @str: copy of the string
 * @Return: Null if error, pointer to allocated space
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	int len = 0;
	char *buffer;

	if (str == NULL)
		{
			return (NULL);
		}
	while (str[len] != '\0')
		len++;

	buffer = malloc(sizeof(char) * (len + 1));

	if (buffer == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		buffer[i] = str[i];

	buffer[len] = '\0';

	return (buffer);
}
