#include "main.h"
#include <stdlib.h>

/**
 * create_array - Crée un tableau de caractèr
 * l'initialise avec un caractère spécifique
 * @taille: Taille du tableau à créer
 * @c: Caractère avec lequel initialiser le tableau
 *
 * Return: (Un pointeur vers le tableau créé, ou NULL en cas d'échec)
 */
char *create_array(unsigned int taille, char c)
{
	char *tableau;
	unsigned int i;

	if (taille == 0)
		return (NULL);

	tableau = malloc(sizeof(char) * taille);
	if (tableau == NULL)
		return (NULL);

	else
		for (i = 0; i < taille; i++)
			tableau[i] = c;

	return (tableau);
}
