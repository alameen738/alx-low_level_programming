#include "main.h"

/**
 * _put - Print a string
 * @str: The string to print
 * Return: void
 */

void _puts(char *str)
{
while (*str != 0; '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
