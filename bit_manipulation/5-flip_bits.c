/**
 * flip_bits - Compte le nombre de bits à inverser
 *  pour passer d'un nombre à un autre
 * @n: Le premier nombre
 * @m: Le deuxième nombre
 *
 * Return: Le nombre de bits à inverser
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int compteur = 0;
	unsigned long int difference;

	difference = n ^ m;
	while (difference)
	{
		if (difference & 1)
			compteur++;
		difference >>= 1;
	}

	return (compteur);
}
