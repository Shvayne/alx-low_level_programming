#include "dog.h"
#include <stdlib.h>
/**
 * free dog - frees the function pointed to
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
