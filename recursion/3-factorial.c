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
	if (n == 0)
	{
		return (1);
	}

	while (n > 1)
	{
		resultado *= n;
		n--;
	}
	return (resultado);
}
