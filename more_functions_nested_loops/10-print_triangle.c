#include "main.h"

/**
* print_triangle - affiche un triangle de taille n
* @size: taille du triangle
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int ligne = 1;

		while (ligne <= size)
		{
			int colonne = 1;

			while (colonne <= ligne)
			{
				_putchar('#');
				colonne++;
			}
			_putchar('\n');
			ligne++;
		}
	}
}
