#include "main.h"

/**
 * _strlen_recursion - renvoie la longueur
 * d'une chaîne de caractères
 * @s: pour calculer la longueur de la chaîne
 * de caractères
 * Return: longueur de la chaîne
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

