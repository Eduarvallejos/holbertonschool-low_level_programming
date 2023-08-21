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
	int guess = n / 2;

	if (n < 0)
	{
		return (-1);
	}
	while (guess * guess > n)
	{
		guess--;
	}
	return (guess);
}
