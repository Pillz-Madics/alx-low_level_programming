#include <stdio.h>
#include <stdlib.h>
#include "Lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */


void free_listint2(listint_t **head)
{
	listint_t *h;

	while (*head != NULL)
	{
		h = (*head)->next;
		free((*head)->n);
		free(*head);
		*head = h;
	}
	*head = NULL;
	h = NULL;
}
