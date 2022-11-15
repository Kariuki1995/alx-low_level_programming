#include "dog.h"
#include <stdio.h>

/**
i * print_dog - prints a struct dog
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("name: (nil)\n");
		else
			printf('name: %s\n", d->name);

		printf("age: %f\n", d->age);

		if (d->owner == NULL)
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}