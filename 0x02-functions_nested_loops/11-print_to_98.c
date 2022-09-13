#include <stdio.h>
#inlcude "main.h"

/**
* print_to_98 - start program
*
* @n: first integer
* Return: void
*/
void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("98\n");
}
