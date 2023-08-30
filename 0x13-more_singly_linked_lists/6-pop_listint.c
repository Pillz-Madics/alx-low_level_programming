#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */


int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	h = malloc(sizeof(*head));

	if (head == NULL)
	{
		return (0);
	}

	h = (*head)->next;
	n = (*head)->n;
	free((*head)->n);
	free(*head);
	*head = h;

	return (n);
}

