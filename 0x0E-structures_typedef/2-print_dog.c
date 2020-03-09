#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that initialize a variable of type struct dog
 * @d: point to struct dog
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: nil\n");
		if (d->age > 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: nil\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: nil\n");
	}
}
