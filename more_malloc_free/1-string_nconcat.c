#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatene deux chaînes de caracteres
 * @s1: Premiere chaine de caracteres
 * @s2: Deuxieme chaine de caracteres
 * @n: Nombre d'octets a concateneéner de s2
 *
 * Return: Pointeur vers la nouvelle chaîne concateneénée
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatene;
	unsigned int longueur_s1 = 0, longueur_s2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[longueur_s1] != '\0')
		longueur_s1++;
	while (s2[longueur_s2] != '\0')
		longueur_s2++;

	if (n >= longueur_s2)
		n = longueur_s2;

	concatene = malloc(sizeof(char) * (longueur_s1 + n + 1));

	if (concatene == NULL)
		return (NULL);

	for (i = 0; i < longueur_s1; i++)
		concatene[i] = s1[i];

	for (j = 0; j < n; j++)
		concatene[i + j] = s2[j];

	concatene[i + j] = '\0';

	return (concatene);
}

