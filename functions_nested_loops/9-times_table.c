#include "main.h"

/**
 * times_table - this program prints the multiplication table of 9.
 *
 * Description: Print 9 times table
 * Return: void
 */
void times_table(void)
{
int row, colum, result;
for (row = 0; row <= 9; row++)
{
_putchar('0');
for (colum = 0; colum <= 9; colum++)
{
_putchar(',');
_putchar(' ');
result = row * colum;
if (result <= 9)
{
_putchar(' ');
}
else
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
