#include "main.h"
#include <stdio.h>
/**
 * factorial - return the factorial of a given number.
 * @n: integer.
 * Return: will print the factorial of the given number.
 */
int factorial(int n)
{
	int resultado = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
