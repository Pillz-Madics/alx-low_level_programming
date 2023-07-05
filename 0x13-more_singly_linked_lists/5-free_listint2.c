#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free memory taken by list
 * @head: address of list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	
	if (*head == NULL)
	{
		return;
	}

	while (*head)
	{
		temp =(*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
