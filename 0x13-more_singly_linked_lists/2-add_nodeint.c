#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *nw;

	nw = malloc(sizeof(*head));
	if (nw == NULL)
	{
		return (NULL);
	}

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (*head);
}

