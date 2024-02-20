#include <stdio.h>

/**
 * main - imprime l'alphabet en minuscules.
 * Return: Toujours 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
