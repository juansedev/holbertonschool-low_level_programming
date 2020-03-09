#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Struct to define a dog
 * @name: name of dog
 * @owner: name's owner of dog
 * @age: years old
 *
 * Description: Structure dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

int _putchar(char c);

#endif
