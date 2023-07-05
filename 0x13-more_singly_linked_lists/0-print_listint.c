#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints elements of singly linked list
 *
 * @t: passed list
 * Return: returns count on success or -1 on fail
 */

size_t print_listint(const listint_t *t)
{
	size_t count = 0;
	const listint_t *check;

	if (t == NULL)
	{
		return (0);
	}
	check = t;
	while (check != NULL)
	{
		count += 1;
		printf("%d\n", check->n);
		check = check->next;
	}
	return (count);
}

