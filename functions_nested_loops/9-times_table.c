#include "main.h"

/**
 * times_table - affiche la table de multiplication par 9, en commençant par 0
 */
void times_table(void)
{
	int i, resultat_1, resultat_2;

	for (i = 0; i <= 9; i++)
	{
		for (resultat_1 = 0; resultat_1 <= 9; resultat_1++)
		{
		resultat_2 = i * resultat_1;
		if (resultat_2 < 10)
		{
			if (resultat_1 != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			_putchar(resultat_2 + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar((resultat_2 / 10) + '0');
			_putchar((resultat_2 % 10) + '0');
		}
		}
		_putchar('\n');
	}
}
