#include "main.h"

/**
* print_square - affiche un carré de taille n
* @size: taille du carré
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int nb1 = 0;

		while (nb1 < size)
		{
			int nb2 = 0;

			while (nb2 < size)
			{
				_putchar('#');
				nb2++;
			}
			_putchar('\n');
			nb1++;
		}
	}
}
