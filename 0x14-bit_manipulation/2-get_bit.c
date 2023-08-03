#include "main.h"


/**
 * get_bit -  get_bit.
 * @n: Decimal to search
 * @index: Bit index.
 *
 * Return:  Return the value of bit.
 */

int get_bit(unsigned long int n, unsigned int index)

{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);

}
