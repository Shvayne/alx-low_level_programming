#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the function pointed to
 * @d: pointer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
