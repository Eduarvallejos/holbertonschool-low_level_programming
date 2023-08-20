#include <stdio.h>
#include <string.h>
/**
 * puts2 - Printin stdout for two character. starting the first character.
 * @str: String a print.
 */
void puts2(char *str)
{
	int len;
	int i;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar(10);
}
