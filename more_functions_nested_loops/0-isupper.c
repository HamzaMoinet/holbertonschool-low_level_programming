#include "main.h"
#include <stdio.h>

/**
  *_ispper - check
  *@c / variable 'c' in uppercase
  *Return: 1 or 0 (Success)
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
