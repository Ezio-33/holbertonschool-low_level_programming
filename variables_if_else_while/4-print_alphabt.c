#include <stdio.h>
/**
 * main - imprime l'alphabet en minuscules sauf q et e,
 *suivi d'une nouvelle ligne.
 *suivi d'une nouvelle ligne.
 * Return: Toujours 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
