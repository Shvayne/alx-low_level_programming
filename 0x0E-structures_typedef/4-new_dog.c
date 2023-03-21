#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * dog_t *new_dog - create a new dog of type dog_t
 * @name: array of chars member
 * @age: int member
 * @owner: array of chars member
 * Return: new dog if success or null if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->owner = owner;
	return (new_dog);
}
