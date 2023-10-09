#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function prints dog struct
 * @d: pointer to struct argument
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n",  d->owner);
		return;
	}
}
