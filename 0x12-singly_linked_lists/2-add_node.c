#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int _strlen(const char *s);

/**
 * add_node - function add new node to linked list
 * @head: address to the head node
 * @str: string to add to new node
 * Return: returns the added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}

/**
 * _strlen - function returns length of str
 * @s: string to evaluate
 *
 * Return: returns string length
 */

int _strlen(const char *s)
{
	int k;

	if (s == NULL)
	{
		return (0);
	}
	else
	{
		k = 1 + _strlen(s + 1);
		return (k);
	}
}
