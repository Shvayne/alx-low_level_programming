#ifndef DOG_H
#define DOG_H

/**
 * struct dog - sets name, age and owner
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: this header file defines a struct
 * with 3 members
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
