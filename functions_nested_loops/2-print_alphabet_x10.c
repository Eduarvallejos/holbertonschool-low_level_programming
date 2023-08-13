#include "main.h"

/**
 * print_alphabet_x10 - This program will print the alphabet 10 times.
 *
 * Return: will always return 0.
 */

void print_alphabet_x10(void)
{
int start;
int ten_time = 1;

while (ten_time <= 10)

{
start = 97;

while (start <= 122)
{
_putchar(start);
start++;
}
_putchar('\n');
ten_time++;
}
}
