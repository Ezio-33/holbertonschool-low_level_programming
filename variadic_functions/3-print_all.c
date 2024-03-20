#include "variadic_functions.h"

/**
 * print_all - Affiche des données en fonction du format spécifié.
 * @format: Liste de types d'arguments passés à la fonction
 */
void print_all(const char *const format, ...)
{
	va_list args;
	char *separator = "";
	unsigned int i = 0;
	char *str;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				separator = ", ";
				str = va_arg(args, char *);
				if (str == NULL)
					printf("%s(nil)", separator);
				else
					printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
			}
			i++;
			separator = ", ";
		}
	}
	printf("\n");
	va_end(args);
}
