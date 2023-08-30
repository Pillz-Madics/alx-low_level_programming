#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _puts_recursion- function prints string
 * @s: the passed string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');

}
