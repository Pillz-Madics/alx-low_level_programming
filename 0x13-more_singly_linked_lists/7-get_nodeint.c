#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nw;
	unsigned int i;

	i = 0;
	nw = head;

	while (i != index && head->next != NULL)
	{
		nw = nw->next;
		i++;
	}

	if (i != index)
	{
	return (NULL);
	}
	return (nw);
}
