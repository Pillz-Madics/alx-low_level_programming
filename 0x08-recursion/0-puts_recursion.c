#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - funtions like puts()
 * @s: is the input
 * Return: Always returns 0 on success
 */

void _puts_recursion(char *s)
{
	if (*s == NULL)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

