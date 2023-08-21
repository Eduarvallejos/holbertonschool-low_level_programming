#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - copies a string to a buffer.
 * @dest: buffer.
 * @src: strig to be copied.
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;
	
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (original_dest);
}
