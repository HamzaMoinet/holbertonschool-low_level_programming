#include "main.h"
/**
 *_prime - calcule
 *@a: nombre a
 *@b: resultat
 *Return: -1 if b > of result a * a and a if b = a
 */
int _prime(int a, int b)
{
	if (b * b > a)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (_prime(a, b + 1));
}
/**
 * is_prime_number - result of calcul
 * @n: nomber
 * Return: _sqtr
 */
int is_prime_number(int n)
{
	if (n <= 2 || n % 2 == 0)
		return (0);

	return (_prime(n, 3));
}
