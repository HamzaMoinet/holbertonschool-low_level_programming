#include "main.h"
#include <stdlib.h>

/**
 *_islower - Checks if a character is lowercase.
 *@c : variable 'c' en minuscule
 *Return: 1 or 0 (Success)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
