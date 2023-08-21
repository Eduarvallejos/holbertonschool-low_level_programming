#include <stdio.h>
#include <string.h>
/**
 * print_array - print n element of array.
 * @a: array pointed.
 * @n: elements to be printed.
 * Reutrn: dest[0].
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
