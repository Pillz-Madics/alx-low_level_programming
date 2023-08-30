#include <stdio.h>
#include <stdlib.h>
#include "Lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		h = h->next;
	}
	return (a);
}
