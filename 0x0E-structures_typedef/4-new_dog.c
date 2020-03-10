#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string.
 * @s: pointer to String
 * Return: Nothing
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * new_dog - function that creates a new dog
 * @name: name to create a new struct
 * @age: age to create a new struct
 * @owner: owner to create a new struct
 *
 * Return: dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *n_dog;
	char *cp_name;
	char *cp_owner;
	
	if (name == NULL)
	{
		free(name);
		return (NULL);
	}
	cp_name = name;

	if (owner == NULL)
	{
		free(owner);
		return (NULL);
	}
	cp_owner = owner;

	n_dog =  malloc(sizeof(struct dog));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;

	return (n_dog);
}
