#include "main.h"
/**
 * print_alphabet_x10 - Affiche l'alphabet en minuscules 10 fois
 * suivi d'une nouvelle ligne à chaque itération
 */
void print_alphabet_x10(void)
{
	char lettre;
	int i = 0;

	while (i < 10)
	{
		lettre = 'a';
		while (lettre <= 'z')
		{
			_putchar(lettre);
			lettre++;
		}
		_putchar('\n');
		i++;
	}
}
