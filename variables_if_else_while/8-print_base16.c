#include <stdio.h>

/**
 * main - imprime tous les chiffres de la base 16 en minuscules,
 * suivi d'une nouvelle ligne.
 * Return: Toujours 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 0; i < 6; i++)
	{
		putchar(i + 'a');
	}
	putchar('\n');

	return (0);
}
