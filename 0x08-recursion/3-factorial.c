#include <stdio.h>
#include "main.h"

/**
 * factorial- functions calculates factorial of a number
 * @n: number to calculate
 * Return: returns n
 */

int factorial(int n)
{
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
		n = n * factorial(n - 1);
		return (n);
	}
}
