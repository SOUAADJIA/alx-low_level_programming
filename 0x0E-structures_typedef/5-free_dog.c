#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: poniter to type dog_t of struct dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
