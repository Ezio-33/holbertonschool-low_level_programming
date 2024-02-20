#include <stdio.h>

/**
 * main - imprime l'alphabet minuscule à l'envers, suivi d'une nouvelle ligne.
 * Return: Toujours 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
