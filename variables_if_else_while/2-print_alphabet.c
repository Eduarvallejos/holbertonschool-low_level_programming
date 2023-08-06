#include <stdio.h>

/**
 * main - Punto de esntrada de este programa.
 * Return: Siempre devolvera 0 .
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}

