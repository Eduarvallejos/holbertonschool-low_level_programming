#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program print the mult of two numbers.
 * @argc: Number of arguments.
 * @argv: The arguments.
 * Return: Success 0, Error 1.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);
	return (0);
	}
}
