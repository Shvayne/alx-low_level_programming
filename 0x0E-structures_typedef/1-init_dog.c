#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - uses struct to access dog owner
 * parameters
 * struct dog - identifies the dog owner's parameters
 * @d: variable
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: a struct with three members
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
