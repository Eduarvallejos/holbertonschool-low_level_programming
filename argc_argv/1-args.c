#include <stdio.h>
/**
 * main - This program print in stdout the number of arguments.
 * @argc: Number of arguments.
 * @argv: show us the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
