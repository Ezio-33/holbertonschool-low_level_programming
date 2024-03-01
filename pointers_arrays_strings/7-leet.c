#include "main.h"

/**
* leet - Encode une chaîne en 1337
* @s: Chaîne à encoder
* Return: La chaîne encodée
*/
char *leet(char *s)
{
	int i, j;
	char lettres[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char remplacements[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (lettres[j] != '\0')
		{
			if (s[i] == lettres[j])
			{
				s[i] = remplacements[j];
				break;
			}
		j++;
		}
	}
	return (s);
}

