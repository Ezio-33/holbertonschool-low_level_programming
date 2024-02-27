#include "main.h"
/**
* more_numbers - affiche 10 fois les nombres
* de 0 à 14, suivis d'un saut de ligne.
*/

void more_numbers(void)
{
	int nombre1 = 0, nombre2;

	while (nombre1 < 10)
	{
		nombre2 = 0;
		while (nombre2 <= 14)
		{
			if (nombre2 > 9)
				_putchar(nombre2 / 10 + '0');
			_putchar(nombre2 % 10 + '0');
			nombre2++;
		}
		_putchar('\n');
		nombre1++;
	}
}
