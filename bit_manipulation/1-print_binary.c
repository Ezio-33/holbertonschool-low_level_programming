#include "main.h"

/**
 * print_binary - Imprime la représentation
 * binaire d'un nombre non signé de type
 * unsigned long int.
 * @n: Le nombre à imprimer.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		print_binary(n >> 1);

		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
