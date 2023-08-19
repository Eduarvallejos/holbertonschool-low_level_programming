#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - Checks if an ASCII value corresponds to a digit.
 * @c: ASCII value of the character to check.
 * Return: will return 1 if it is a digit, 0 if it is not.
 */
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}
