#include <stdio.h>

void avant_main(void) __attribute__((constructor));

/**
 * avant_main - Fonction exécutée avant main
 */
void avant_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
