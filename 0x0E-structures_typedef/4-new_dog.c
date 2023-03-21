#include <string.h>
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
	int length1, length2;

	new_dog = malloc(sizeof(dog_t));
	length1 = strlen(name);
	length2 = strlen(owner);

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (length1 + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
