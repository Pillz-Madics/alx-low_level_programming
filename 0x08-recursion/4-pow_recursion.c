#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Returns the power of a given number
 * @x: number to return the power of
 * @y: the power to return to multiply by
 *
 * Return: Returns i
 */

int _pow_recursion(int x, int y)
{
	int i = 1;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	else
	{
		i = x * _pow_recursion(x, y - 1);
	}
	return (i);
}
