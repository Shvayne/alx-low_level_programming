#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints the struct dog
 * @d: pointer to variable of type struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);

	}
}
