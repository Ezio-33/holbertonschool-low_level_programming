#include "main.h"

/**
 * jack_bauer - affiche chaque minute de la journée de Jack Bauer
 */
void jack_bauer(void)
{
	int heure = 0, minute = 0;

		while (heure < 24)
		{
		minute = 0;
		while (minute < 60)
			{
			_putchar((heure / 10) + '0');
			_putchar((heure % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;
			}
		heure++;
		}
}
