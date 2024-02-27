#include "main.h"

/**
* print_rev - Imprime une chaîne de caractères à
* l'envers, suivie d'un saut de ligne.
* @chaine: Chaîne de caractères à imprimer à l'envers.
*/
void print_rev(char *chaine)
{
	int longueur = 0;
	int position;

	while (*(chaine + longueur) != '\0')
	{
		longueur++;
	}
	for (position = longueur - 1; position >= 0; position--)
	{
		_putchar(*(chaine + position));
	}
	_putchar('\n');
}
