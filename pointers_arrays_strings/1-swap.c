#include "main.h"

/**
* swap_int - échange les valeurs de deux entiers
* @entiers1: pointeur sur la première valeur
* @entiers2: pointeur sur la deuxième valeur
* temp: variable temporaire pour stocker le nombre a switch
*/
void swap_int(int *entiers1, int *entiers2)
{
	int temp;

	temp = *entiers1;
	*entiers1 = *entiers2;
	*entiers2 = temp;
}
