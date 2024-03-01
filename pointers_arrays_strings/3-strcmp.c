#include "main.h"

/**
* _strcmp - compare deux chaînes de caractères
* @s1: première chaîne à comparer
* @s2 : deuxième chaîne à comparer
* Return: inférieur à 0 si s1 est inférieur à s2, 0 s'ils sont égaux,
* supérieur à 0 si s1 est supérieur à s2
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
