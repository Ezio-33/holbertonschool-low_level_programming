#include "main.h"

/**
* print_triangle - imprime un triangle de taille n
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
			int espaces = size - ligne;
			int diese = ligne;

			while (espaces > 0)
			{
				_putchar(' ');
				espaces--;
			}
			while (diese > 0)
			{
				_putchar('#');
				diese--;
			}
			_putchar('\n');
			ligne++;
		}
	}
}
