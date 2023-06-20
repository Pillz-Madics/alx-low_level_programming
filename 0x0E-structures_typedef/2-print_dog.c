#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	printf("name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n",  d->owner);
	return;

}
