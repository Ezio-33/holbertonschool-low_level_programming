#include "variadic_functions.h"

/**
 * print_numbers - affiche les nombres suivis d'un saut de ligne.
 * @separator: Chaîne à afficher entre les nombres
 * @n: Nombre d'entiers passés à la fonction
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
