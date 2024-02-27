#include "main.h"
/**
*print_numbers - qui affiche tous les nombres de
*0 à 9
*/
void print_numbers(void)
{
	int nombre = '0';

	while (nombre <= '9')
	{
		_putchar(nombre);
		nombre++;
	}
	_putchar('\n');
}
