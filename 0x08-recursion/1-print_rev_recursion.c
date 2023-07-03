#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 *@s: passed string
 */

void _print_rev_recursion(char *s)
{
	if (s == NULL)
	{
		_putchar('\n');
	} else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
