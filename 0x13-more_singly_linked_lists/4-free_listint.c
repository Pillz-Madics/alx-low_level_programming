#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free memory taken by list
 * @head: address of list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
