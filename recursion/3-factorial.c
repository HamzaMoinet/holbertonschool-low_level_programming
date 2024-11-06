#include "main.h"
/**
 *factorial - factor
 *@n: number
 *Return: return in @n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
