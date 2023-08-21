#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion - Recursively calculates the square root of a number.
 * @n: The number for which to find the square root.
 * Return: will print the square root of the given number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, guess + 1));
}
/**
 * find_sqrt - Finds the square root of a number.
 * @n: The number for which to find the square root.
 * Return: The square root of n, or -1 if not found.
 */
int find_sqrt(int n)
{
	return (_sqrt_recursion(n, 1));
}
