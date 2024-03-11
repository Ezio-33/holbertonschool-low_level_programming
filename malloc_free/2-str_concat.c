#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatène deux chaînes de caract�s
 * @s1: Première chaîna concaténr
 * @s2: Deuxième chaî a concat�r
 * Return: Un pointeur vers un nouvel espace mémoire contenant
 *  la concaténation des deux chaînes, ou NULL en cas d'éc
 */
char *str_concat(char *s1, char *s2)
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

	concatene = malloc(sizeof(char) * (longueur_s1 + longueur_s2 + 1));

	if (concatene == NULL)
		return (NULL);

	for (i = 0; i < longueur_s1; i++)
		concatene[i] = s1[i];

	for (j = 0; j < longueur_s2; j++)
		concatene[i + j] = s2[j];

	concatene[longueur_s1 + longueur_s2] = '\0';

	return (concatene);
}

