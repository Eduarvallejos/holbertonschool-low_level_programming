#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - return the value of x raised to the power of y.
 * @x: value
 * @y: power.
 * Return: print the result of the operation.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
