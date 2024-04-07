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
 * copier_fichier - Copie le contenu d'un fichier vers un autre fichier.
 * @fichier_source: Le descripteur de fichier du fichier source.
 * @fichier_destination: Le descripteur de fichier du fichier de destination.
 * Return: 0 en cas de succès, un code d'erreur en cas d'échec.
 */
int copier_fichier(int fichier_source, int fichier_destination)
{
	ssize_t octets_lus, octets_ecrits;
	char tampon[1024];

	while ((octets_lus = read(fichier_source, tampon, 1024)) > 0)
	{
		octets_ecrits = write(fichier_destination, tampon, octets_lus);
		if (octets_ecrits != octets_lus)
		{
			return (99);
		}
	}

	if (octets_lus == -1)
	{
		return (98);
	}

	return (0);
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

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	fichier_source = open(argv[1], O_RDONLY);
	fichier_destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	existe(fichier_source, fichier_destination, argv);

	if (copier_fichier(fichier_source, fichier_destination) != 0)
	{
		close(fichier_source);
		close(fichier_destination);
		return (1);
	}

	err_close = close(fichier_source);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fichier_source);
		return (100);
	}

	err_close = close(fichier_destination);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fichier_destination);
		return (100);
	}

	return (0);
}
