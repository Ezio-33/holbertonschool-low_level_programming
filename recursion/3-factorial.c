#include "main.h"

/**
 * factorial - renvoie la factorielle d'un nombre
 * @n: nombre à partir duquel la factorielle est renvoyée
 * Return: factorielle de n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

