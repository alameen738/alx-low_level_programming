#include <stdio.h>
#include <string.h>
/**
 * puts_half - The function should print the second half of the string
 * if odd len, n = (length_of_the_string -1)/2
 * @str: input
 * Return: halfof input
 */

void puts_half(char *str)
{
int length = strlen(str);
int start = length / 2;
for (int i = start; i < length; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
