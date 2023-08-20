#include <stdio.h>
#include <string.h>
/**
 * puts_half - Print in stdout, the half of a string.
 * @str: String to print.
 */
void puts_half(char *str)
{
	int len;
	int i;
	int n;

	len = strlen(str);
	n = (len - 1) / 2;

	if (len % 2 == 0)
	{
		for (i = n + 1; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = n + 1; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	putchar(10);
}
