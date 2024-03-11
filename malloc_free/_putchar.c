#include <unistd.h>

/**
 * _putchar - ecrit le caractere c sur stdout
 * @c: Le caractere a afficher
 *
 * Return: En cas de succes 1.
 * En cas d'erreur, -1 est renvoye et errno est defini de maniere appropriee.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
