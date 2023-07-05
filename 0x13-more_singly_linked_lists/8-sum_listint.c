#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - add all data of a linked list
 * @head: address of first node
 * Return: sum of all the data, or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
