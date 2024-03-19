#include "variadic_functions.h"

/**
 * print_strings - affiche les chaînes de caractères
 * suivies d'un saut de ligne.
 * @separator: Chaîne à afficher entre les chaînes
 * @n: Nombre de chaînes passées à la fonction
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
