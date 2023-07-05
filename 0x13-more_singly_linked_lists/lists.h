#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_t - structure for singly linked list
 * @n: First member
 * @next: address to the next node
 * Description: structure for singly linked list named listint_t
 */


struct listint_t
{
	int n;
	struct listint_t *next;
};

/**
 * listint_t - Typedef for struc listint_t
 *
 */

typedef struct listint_t listint_t;

size_t print_listint(const listint_t *h);
int _putchar(char c);
size_t listint_len(const listint_t *h);
#endif
