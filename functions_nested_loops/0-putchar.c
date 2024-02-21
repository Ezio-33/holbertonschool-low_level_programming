#include "main.h"

/**
 * main - Affiche _putchar, suivi d'une nouvelle ligne
 * Return: Toujours 0
 */
int main(void)
{
	char *str = "_putchar\n";

	while (*str)
		putchar(*str++);
	return (0);
}
