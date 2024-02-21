#include "main.h"

/**
 * times_table - affiche la table de multiplication par 9, en commençant par 0
 */
void times_table(void)
{
	int i, resultat;

	for (i = 0; i <= 9; i++)
	{
	resultat = i * 9;
		if (resultat < 10)
		{
			_putchar(resultat + '0');
		}
		else
		{
			_putchar((resultat / 10) + '0');
			_putchar((resultat % 10) + '0');
		}
		if (i != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
