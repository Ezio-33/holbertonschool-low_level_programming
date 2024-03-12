#include "main.h"

/**
 * print_sign - affiche le signe d'un nombre.
 * @nombre: Le nombre à évaluer
 * Return:	1 et affiche '+' si nombre est supérieur à zéro,
 *			0 et affiche '0' si nombre est zéro,
 *			-1 et affiche '-' si nombre est inférieur à zéro
 */
int print_sign(int nombre)
{
	if (nombre > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (nombre == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
