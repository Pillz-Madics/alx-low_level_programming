#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - functions prints string passed as arguments
 * @separator: its the strings put between the printed string arguments
 * @n: number of passed arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *a;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(arguments, char *);
		if (a == NULL)
		{
			printf("nil");
		}
		else
		{
		printf("%s", a);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
