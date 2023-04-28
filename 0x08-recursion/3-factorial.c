#include <stdio.h>
#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: number to return the factorial from
 * Return: factorial on
 */
int factorial(int n)
{
	int i = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
