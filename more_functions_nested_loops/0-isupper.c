#include "main.h"
#include <stdio.h>

/**
 *_isupper - check
 *@c : variable 'c' in uppercase
 *Return: 1 or 0 (1 is uppercase 0 is otherwise)
*/

#include "main.h"
#include <stdio.h>

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
