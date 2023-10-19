#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function that prints data of a linked list
 *
 * @h: head pointer to the first node of the list
 * Return: count of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *new;
	size_t i;

	i = 0;
	new = h;

	while (new != NULL)
	{
		if (new->str == NULL)
		{
			printf("[0] (nil)\n");
			new = new->next;
		}
		else
		{
		printf("[%d] %s\n", new->len, new->str);
		new = new->next;
		}
		i++;
	}
return (i);
}
