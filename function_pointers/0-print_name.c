#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - affiche un nom en utilisant une fonction spécifiée
 * @name: Le nom a afficher
 * @f: Pointeur vers la fonction d'impression
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
