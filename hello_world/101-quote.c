#include <unistd.h>
/**
* main - Ceci est la fonction principale du programme.
* Elle renvoie un entier et ne prend aucun argument.
* char message[] est utilisé pour créer un tableau avec
* le message que l'on souhaite afficher.
* 2: Représente la sortie d'erreur standard
* sizeof(message) - 1: nombre d'octets à écrire, en excluant
* le caractère de fin de chaînequi est nul noté \0
* Return: Le programme retourne 1
*/

int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);
	return (1);
}
