#include "main.h"

/**
 * _sqrt_recursion - renvoie la racine carrée
 * naturelle d'un nombre
 * @n : nombre a calculer la racine carrée
 *
 * Return: la racine carrée
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (racine_carree_recursive(n, 0));
}

/**
 * racine_carree_recursive - recherche la racine
 * carrée naturelle d'un nombre
 * @n : nombre a calculer la racine carrée
 * @i : itérateur
 *
 * Return: la racine carrée
 */
int racine_carree_recursive(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (racine_carree_recursive(n, i + 1));
}

