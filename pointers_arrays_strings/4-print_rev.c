#include "main.h"
#include <stdio.h>
/**
 * print_rev - print the string backwards.
 * @s: chain name.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

	int i;

	for (i = length - 1; i >= 0; i--)
	{
	putchar(s[i]);
	}
}
