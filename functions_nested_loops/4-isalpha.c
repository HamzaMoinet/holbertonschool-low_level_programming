#include "main.h"
#include <stdlib.h>

/**
 *_isalpha - Checks if a character is lowercase or uppercase
 *@c : variable 'c' en minuscule
 *@c: variable 'c' en majuscule
 *Return: 1 or 0 (Success)
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
