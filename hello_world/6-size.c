#include <stdio.h>
/**
 * main - Punto de entrada de este programa.
 * Return: Siempre devolvera 0 .
 */
int main(void)
{
printf("size of a char): %zu byte(s)\n", sizeof(char));
printf("size of a int): %zu byte(S)\n", sizeof(int));
printf("size of a long int: %zu byte(s)\n", sizeof(long int));
printf("size of a long long: %zu byte(s)\n", sizeof(long long));
printf("size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}
