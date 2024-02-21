#include "main.h"
/**
 * print_to_98 - affiche tous les nombres naturels de
 * nombres à 98, suivis d'un saut de ligne
 * @nombres: le nombre à partir duquel commencer l'impression
 */
void print_to_98(int nombres)
{
	if (nombres <= 98)
	{
		while (nombres < 98)
		{
			_putchar((nombres / 10) + '0');
			_putchar((nombres % 10) + '0');
			_putchar(',');
			_putchar(' ');
			nombres++;
		}
	}
	else
	{
		while (nombres > 98)
		{
			_putchar((nombres / 10) + '0');
			_putchar((nombres % 10) + '0');
			_putchar(',');
			_putchar(' ');
			nombres--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
