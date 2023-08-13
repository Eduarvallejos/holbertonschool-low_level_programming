#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if a character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if the character is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
int result;
int alpha_is = 0;

result = isalpha(c);

if (result != 0)
alpha_is = 1;

return (alpha_is);
}
