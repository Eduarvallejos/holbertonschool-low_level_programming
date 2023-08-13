#include"main.h"

/**
 * jack_bauer - will print hours and minutes.
 *
 * Description: Print every hour and minute of the day.
 * Return: void
 */
void jack_bauer(void)
{
int hora = 0;
int minuto = 0;
for (; hora < 24; hora++)
{
for (; minuto < 60; minuto++)
{
_putchar((hora / 10) + '0');
_putchar((hora % 10) + '0');
_putchar(':');
_putchar((minuto / 10) + '0');
_putchar((minuto % 10) + '0');
_putchar('\n');
}
minuto = 0;
}
}
