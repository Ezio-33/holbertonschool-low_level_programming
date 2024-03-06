#include "main.h"

/**
 * is_prime_number - vérifie si un
 * entier est un nombre premier
 * @n: entier à vérifier
 *
 * Return: 1 si n est premier, sinon 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (nombre_premier_recursive(n, 2));
}

/**
 * nombre_premier_recursive - fonction auxiliaire
 * récursive pour vérifier si un nombre est premier
 * @n: entier à vérifier
 * @i: diviseur potentiel
 *
 * Return: 1 si n est premier, sinon 0
 */
int nombre_premier_recursive(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);

	return (nombre_premier_recursive(n, i + 1));
}

