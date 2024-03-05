#include "main.h"

/**
 * _puts_recursion - Affiche une chaîne suivie d'un saut de ligne
 * @s: La chaîne à afficher
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
