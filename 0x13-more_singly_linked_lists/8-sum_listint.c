#include <stdio.h>
#include <stdlib.h>
#include "Lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	listint_t *nw;
	int a;

	a = 0;
	nw = malloc(sizeof(head));

	while (head != NULL)
	{
		a += head->n;
		head = head->next;
	}
	return (a);
}

