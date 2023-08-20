#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a string.
 * @s: string to be reversed.
 */

void rev_string(char *s)
{
 int length = strlen(s);
 int ;
    for (i = 0; i < length / 2; i++) {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
     
}
}
