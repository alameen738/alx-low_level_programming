#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */

int main(void)

{

int n, m;

for (n = 48; n <= 56; n++)

{

if (m > n)

{
putchar(m);

if (n == 57)
{
	continue;
}
putchar(',');

putchar(' ');
}

putchar('\n');

return (0);

}
