#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - uses struct to access dog owner
 * parameter
 * @d: variable
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: a struct with three members
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
