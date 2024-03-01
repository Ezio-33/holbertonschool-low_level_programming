#include "main.h"

/**
* _strncpy - Copie au plus n caractères de src dans dest
* @dest: Chaîne de destination
* @src: Chaîne source à copier
* @n: Nombre maximal de caractères à copier de src
* Return: Pointeur vers la chaîne résultante dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
