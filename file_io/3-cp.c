#include "main.h"

/**
 * existe - Vérifie si un fichier existe et peut être lu/écrit.
 * @fichier_source: Le descripteur de fichier du fichier source.
 * @fichier_destination: Le descripteur de fichier du fichier de destination.
 * @argv: Le tableau des arguments.
 */
void existe(int fichier_source, int fichier_destination, char *argv[])
{
	if (fichier_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fichier_destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copie le contenu d'un fichier vers un autre fichier.
 * @argc: Le nombre d'arguments.
 * @argv: Un tableau contenant les arguments.
 * Return: 0 en cas de succès, un code d'erreur en cas d'échec.
 */
int main(int argc, char *argv[])
{
	int fichier_source, fichier_destination, err_close;
	ssize_t nombre_caracteres, nombre_ecrits;
	char tampon[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fichier_source = open(argv[1], O_RDONLY);
	fichier_destination = open(argv[2],
							   O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	existe(fichier_source, fichier_destination, argv);
	nombre_caracteres = 1024;

	while (nombre_caracteres == 1024)
	{
		nombre_caracteres = read(fichier_source, tampon, 1024);
		if (nombre_caracteres == -1)
			existe(-1, 0, argv);

		nombre_ecrits = write(fichier_destination, tampon, nombre_caracteres);
		if (nombre_ecrits == -1)
			existe(0, -1, argv);
	}
	err_close = close(fichier_source);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fichier_source);
		exit(100);
	}
	err_close = close(fichier_destination);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fichier_source);
		exit(100);
	}
	return (0);
}
