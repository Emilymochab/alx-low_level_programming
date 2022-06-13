#include "main.h"

/**
 *puts2 - prints every character of a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means it is correct
 */

void puts2(char *str)
{
int b;

for (b = 0; str[b] != '\0'; b++)
{
if (b % 2 == 0)
_putchar (str[b]);
}

_putchar ('\n');
}
