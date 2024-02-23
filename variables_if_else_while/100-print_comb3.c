#include <stdio.h>
/**
* main - Affiche toutes les combinaisons
* différentes possibles de deux chiffres
* Return: Toujours 0 (Succès)
*/

int main(void)
{
	int nombre1, nombre2;

	for (nombre1 = 0; nombre1 < 10; nombre1++)
	{
		for (nombre2 = nombre1 + 1; nombre2 < 10; nombre2++)
		{
			putchar(nombre1 + '0');
			putchar(nombre2 + '0');

			if (nombre1 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
