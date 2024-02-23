#include <stdio.h>
/**
* main - affiche toutes les combinaisons différentes
*possibles de trois chiffres
* Return: Toujours 0 (Succès)
*/
int main(void)
{
	int nombre1, nombre2, nombre3;

	for (nombre1 = 0; nombre1 < 10; nombre1++)
	{
		for (nombre2 = nombre1 + 1; nombre2 < 10; nombre2++)
		{
			for (nombre3 = nombre2 + 1; nombre3 < 10; nombre3++)
			{
				putchar(nombre1 + '0');
				putchar(nombre2 + '0');
				putchar(nombre3 + '0');

				if (!(nombre1 == 7 && nombre2 == 8 && nombre3 == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
