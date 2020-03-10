#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - function that copies the string pointed to
 * @dest: pointer to string entry data
 * @src: destiny data
 * Return: return value of dest
 */

void *_strcpy(char *dest, char *src)
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
	return (dest);
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
	dog_t *n_dog;

	n_dog =  malloc(sizeof(dog_t));
	if (n_dog)
	{
		n_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
		if (n_dog->name)
		{
			n_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
			if (n_dog->owner)
			{
				_strcpy(n_dog->name, name);
				_strcpy(n_dog->owner, owner);
				n_dog->age = age;
				return (n_dog);
			}
			else
				free(n_dog->name);
				free(n_dog);
		}
		else
			free(n_dog);
	}
	return (NULL);
}
