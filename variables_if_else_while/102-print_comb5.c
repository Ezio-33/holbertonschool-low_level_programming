#include <stdio.h>
/**
* main - Affiche toutes les combinaisons possibles de deux chiffres différents
* Return: Toujours 0 (Succès)
*/
int main(void)
{
	int nombre1, nombre2;

	for (nombre1 = 0; nombre1 < 100; nombre1++)
	{
		for (nombre2 = 0; nombre2 < 100; nombre2++)
		{
			putchar(nombre1 / 10 + '0');
			putchar(nombre1 % 10 + '0');
			putchar(' ');
			putchar(nombre2 / 10 + '0');
			putchar(nombre2 % 10 + '0');

			if (!(nombre1 == 99 && nombre2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
