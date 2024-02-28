#include "main.h"

/**
* puts2 - Imprime chaque deuxième caractère d'une chaîne,
* en commençant par le premier caractère, suivi d'un saut de ligne.
* @chaine: La chaîne de caractères dont les caractères alternés
* doivent être imprimés.
*/
void puts2(char *chaine)
{
	int i = 0;

	while (chaine[i] != '\0')
	{
		_putchar(chaine[i]);
		i += 2;
	}
	_putchar('\n');
}
