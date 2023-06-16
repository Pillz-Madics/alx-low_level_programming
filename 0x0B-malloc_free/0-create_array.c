#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to array, return NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str = malloc((sizeof(char)) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{

		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}
}
