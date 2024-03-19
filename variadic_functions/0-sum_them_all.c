#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calcule la somme de tous les paramètres.
 * @n: Nombre de paramètres à additionner
 *
 * Return: La somme des paramètres.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
