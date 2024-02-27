#include "main.h"

/**
 * print_line - affiche une ligne droite de longueur n
 * @n: nombre de fois où le caractère "_" doit être affiché
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
