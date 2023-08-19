#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
* _isupper - check if the character is uppercase or lowercase.
* @c: ASCII value of the character to check.
* Return: will return 0 or 1.
*/

int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}
