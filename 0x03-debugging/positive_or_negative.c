#include "main.h"

/**
* main - Dertime id a number is positive, nagative or zero.
* Return: 0 on success
*/

void positive_or_nagative(int i)
{
if(i < 0)
{
printf("&d is %s\n", i, "nagative");
}
else if (i > 0)
{
printf("%d is &s\n", i, "positive");
}
else
{
printf("%d is %s\n" , i, "zero");
}
return;

}
