#include "main.h"

/**
* reverse_array - inverse un tableau d'entiers
* @a : tableau à inverser
* @n : nombre d'éléments dans le tableau
*/
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
