#include <stdio>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - Add arguments.
 *@n: parameter count.
 *@...:Variables to calculate the sum of.
 *Return: Returns s on success, else if  n==0 -0.
 *
 */


int sum_them_all(const usigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	va_list sum;

	va_start(sum, n);

	int  s, i;

	for (i = 0; i < n; i++)
	{
		s += va_arg(sum, int);
	}

	return (s);
}
