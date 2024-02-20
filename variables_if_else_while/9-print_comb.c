#include <stdio.h>

/**
 * main - imprime toutes les combinaisons possibles de chiffres de
 * 0 à 9, séparées par une virgule et un espace,
 * suivies d'une nouvelle ligne.
 * Return: Toujours 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
