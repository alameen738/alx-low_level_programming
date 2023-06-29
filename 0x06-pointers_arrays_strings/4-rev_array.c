#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @a: array
 * @n: number of element of array
 * Return: void
 */

void reverse_array(int *a, int n)
{

int i;
int t;

for (i = 0; i < n--; i++)
t = a[i];
a[i] = a[n];
a[n] = t;
}
