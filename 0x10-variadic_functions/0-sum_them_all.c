#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - functions that returns the sum of all its argument
 *
 * @n: number of argument`
 *
 * Return: returns sum of it argumets or zero 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argument;
	int sum;
	unsigned int i;

	va_start(argument, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argument, int);
	}

	va_end(argument);

	return (sum);

}
