#include <stdio.h>

/**
 * main - Punto de entrada del programa.
 * Return: Siempre devolvera 0 .
 */

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);

}
letter++;
}
putchar('\n');

return (0);
}
