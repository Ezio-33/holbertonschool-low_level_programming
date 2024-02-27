#include "main.h"

/**
 * main - Point d'entrée du programme
 * Return: Toujours 0
 */
int main(void)
{
	int nombre = 1;

	while (nombre <= 100)
	{
		if (nombre % 3 == 0 && nombre % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (nombre % 3 == 0)
		{
			printf("Fizz");
		}
		else if (nombre % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", nombre);
		}
		if (nombre != 100)
		{
			printf(" ");
		}

		nombre++;
	}
	printf("\n");

	return (0);
}
