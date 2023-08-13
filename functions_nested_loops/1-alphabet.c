#include "main.h"

/**
 * print_alphabet - this program prints the alphabet in lowercase.
 *
 * Return: will always return 0.
 */

void print_alphabet(void)
{
int start = 97;

while (start <= 122)


{
_putchar(start);
start++;
}
_putchar('\n');
}
