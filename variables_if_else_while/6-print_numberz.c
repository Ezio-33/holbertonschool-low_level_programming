#include <stdio.h>

/**
 * main - imprime tous les chiffres de 0 à 9, suivi d'une nouvelle ligne.
 * Return: Toujours 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		putchar('\n');
	}
	return (0);
}
