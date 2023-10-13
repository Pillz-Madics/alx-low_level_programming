#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name- function prints name
 * @name: name to be printed
 * @f: prints a name as is
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
