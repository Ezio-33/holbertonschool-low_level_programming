#include "main.h"

/**
* puts_half - Imprime la deuxième moitié de la chaîne de caractères.
* @chaine: La chaîne de caractères dont la deuxième moitié doit
* être imprimée.
*/
void puts_half(char *chaine)
{
	int longueur = 0;
	int i, debut;

	while (chaine[longueur] != '\0')
	{
		longueur++;
	}

	if (longueur % 2 == 0)
	{
		debut = longueur / 2;
	}
	else
	{
		debut = (longueur - 1) / 2;
	}
	for (i = debut; i < longueur; i++)
	{
		_putchar(chaine[i]);
	}
	_putchar('\n');
}
