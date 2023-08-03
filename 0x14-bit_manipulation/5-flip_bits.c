#include "main.h"


/**
 * flip_bits - Flip_bits.
 * @n: 1st Num
 * @m: number
 *
 * Return: Num of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
int w, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (w = 63; w >= 0; w--)
{
current = exclusive >> w;
if (current & 1)
count++;
}

return (count);

}
