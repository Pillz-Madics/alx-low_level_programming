#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - functiion returns list of nodes
 * @h: head node pointer
 * Return: count of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *new;
	size_t count;

	count = 0;
	new = h;

	while (new != NULL)
	{
		count++;
		new = new->next;
	}
	return (count);
}
