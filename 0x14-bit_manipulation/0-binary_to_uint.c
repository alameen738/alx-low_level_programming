#include "main.h"


/**
 * binary_to_uint - binary_to_uint
 * @b: string that contain binary 0 & 1
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)

{
int w;
unsigned int dec_val = 0;
if (!b)
return (0);
for (w = 0; b[w]; w++)
{
if (b[w] < '0' || b[w] > '1')
return (0);
dec_val = 2 * dec_val + (b[w] - '0');
}


return (dec_val);

}
