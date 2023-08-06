#include <stdio.h>
/**
 * main - Punto de entrada de este programa.
 * Return: Siempre devolvera 0 .
 */

int main(void)
{
char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}

putchar('\n');

return (0);
}
