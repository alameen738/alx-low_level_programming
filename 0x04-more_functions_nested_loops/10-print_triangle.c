#include "main.h"

/**
 * main -Entry point
 *
 * Description: print the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
int row, hashes, spaces;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (spaces = size - row; spaces >= 1; spaces--)
_putchar(' ');
{
for (hashes = 1; hashes <= row; hashes++)
_putchar('#');
}
_putchar('\n');
}
}
}
