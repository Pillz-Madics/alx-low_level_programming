#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint -function that adds node at the beginning of the list
 * @head: first node
 * @n: data to insert into first node
 *
 * Return: Returns address to the new node on success or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

