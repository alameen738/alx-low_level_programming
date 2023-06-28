#include "main.h"
/**
 * puts2 - function should print only one character ot of two
 * starting with the first on
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
printf("%c", str[i]);
i += 2;
}
printf("\n");
}
