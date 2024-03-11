#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplique une chaîne de caractères
 * @chaine: Chaîne à dupliquer
 * Return: (Un pointeur vers la nouvelle chaîne dupliquée, ou NULL en cas d'échec)
 */
 
char *_strdup(char *chaine)
{
	char *duplique;
	unsigned int longueur = 0;
	unsigned int i;

	if (chaine == NULL)
		return (NULL);

	while (chaine[longueur] != '\0')
		longueur++;

	duplique = malloc(sizeof(char) * (longueur + 1));

	if (duplique == NULL)
		return (NULL);

	for (i = 0; i < longueur; i++)
		duplique[i] = chaine[i];

	duplique[longueur] = '\0';

	return (duplique);
}

