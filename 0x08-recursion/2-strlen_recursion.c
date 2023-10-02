#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion- function returns length of string
 * @s: string passed to function
 * Return: return string length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		int k = 1 + _strlen_recursion(s + 1);

		return (k);
	}
}
