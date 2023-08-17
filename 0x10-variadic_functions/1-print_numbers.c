#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all the numbers passed as arguments
 * @separator: a string that is put between the printed arguments
 * @n: number of passed arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		printf(" %d", va_arg(arguments, int));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);

}
