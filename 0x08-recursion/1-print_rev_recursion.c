#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: passed pointer to string
 * Description: reverses string passed through char s
 * Return: returns nothing
*/
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

