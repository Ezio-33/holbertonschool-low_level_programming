#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Informations de base du chien
 * @name: Premier elements
 * @age: Deuxième elements
 * @owner: Troisième elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef pour struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif