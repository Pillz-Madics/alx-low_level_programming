#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - Add arguments.
 *@n: parameter count.
 *@...:Variables to calculate the sum of.
 *Return: Returns s on success, else if  n==0 -0.
 *
 */


int sum_them_all(const unsigned int n, ...)
{
	int s, i, j = (int)n;
	va_list sum;

	va_start(sum, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < j; i++)
	{
		s += va_arg(sum, int);
	}

	return (s);
}
