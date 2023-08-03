#include "main.h"


/**
 * get_endianness - get_endianness
 * Return: Return 0 if (huge), 1 if (small)
 */

int get_endianness(void)

{
unsigned int w = 1;
char *x = (char *) &w;
return (*x);

}
