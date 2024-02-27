#include "main.h"
/**
*_puts - Affiche une chaîne de caractères suivie d'un saut de ligne.
* @str: Le pointeur vers la chaîne de caractères à afficher.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

