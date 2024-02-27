#include "main.h"

/**
 * print_diagonal - dessine une ligne diagonale de longueur n
 * @nb_barres_obliques: nombre de fois où '\' doit être imprimé
 */
void print_diagonal(int nb_barres_obliques)
{
	if (nb_barres_obliques <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int ligne, espaces;

		for (ligne = 0; ligne < nb_barres_obliques; ligne++)
		{
			for (espaces = 0; espaces < ligne; espaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
