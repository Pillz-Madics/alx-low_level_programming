#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - prints elements of singly linked list
 *
 * @h: passed list
 * Return: returns count on success or -1 on fail
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *check;

	if (t == NULL)
	{
		return (-1);
	}
	check = h;
	while (check != NULL)
	{
		count += 1;
		check = check->next;
	}
	return (count);
}

