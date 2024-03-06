#include "main.h"

/**
 * _racine_carree_recursion - retourne la racine carrée naturelle d'un nombre
 * @n: nombre dont on cherche la racine carrée
 * Return: racine carrée naturelle de n, ou -1 si elle n'existe pas
 */
int _racine_carree_recursion(int n)
{
	return (_racine_carree_recursive(n, 1));
}

/**
 * _racine_carree_recursive - fonction auxiliaire
 * récursive pour trouver la racine carr
 * @n: nombre dont on cherche la racine carré
 * @i: candidat pour la racine carré
 * Return: racine carrée naturelle de n, ou -1 si elle n'existe pa
 */
int _racine_carree_recursive(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
		eturn _racine_carree_recursive(n, i + 1);
}

