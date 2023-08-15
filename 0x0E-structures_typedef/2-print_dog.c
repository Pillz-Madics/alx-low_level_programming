#include <stdio.h>
#include "dog.h"

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
