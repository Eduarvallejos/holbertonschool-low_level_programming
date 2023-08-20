#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print numbers from 0 to 14.
 * Return: nothing.
 */
void more_numbers(void)
{
int i, j;

i = j = 0;
while (i < 10)
{
while (j <= 14)
{
if (j >= 10)
putchar(j / 10 + '0');
putchar(j % 10 + '0');
++j;
		}
putchar('\n');
j = 0;
i++;
}
}
