#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - function that initialize a variable of type struct dog
 * @d: point to struct dog
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
	else
		free(d);
}
