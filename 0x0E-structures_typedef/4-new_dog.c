#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - function that copies the string pointed to
 * @dest: pointer to string entry data
 * @src: destiny data
 * Return: return value of dest
 */

void _strcpy(char *dest, char *src)
{
	int i = 0;

	if (src != '\0')
	{
		for (i = 0;  *(src + i) != '\0'; i++)
		{
			*(dest + i) = *(src + i);
		}
	}

	*(dest + i) = '\0';
}
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

	cp_name = malloc((_strlen(name) + 1) * sizeof(char));
	if (cp_name == NULL)
		return (NULL);

	cp_owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (cp_name == NULL)
		return (NULL);
	
	_strcpy(cp_name, name);
	_strcpy(cp_owner, owner);

	n_dog =  malloc(sizeof(struct dog));
	if (n_dog == NULL)
		return (NULL);


	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;

	return (n_dog);
}
