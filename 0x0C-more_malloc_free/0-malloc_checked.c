#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -function allocates memory and returns a pointer.
 *
 * @b: size of allocated memory.
 * Return: returns void pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);
	if (z == NULL)
	{
		exit(98);
	}
	return (z);
}
