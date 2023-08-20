#include "main.h"
#include <stdio.h>
/**
 * print_line - draws a straight line (n) characters long.
 * @n: number of times to print the character.
 */

void print_line(int n)
{
int i;
if (n > 0)
for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
