#include "main.h"

/**
* print_square - start program
*
* @size: to be printed
* Return: void
*/

void print_square(int size)
{
int rsn = 0, rsnn;

while (rsn < size && size > 0)
{
rsnn = 0;
while (rsnn < size)
{
_putchar('#');
rsnn++;
}
_putchar('\n');
rsn++;
}
if (rsn == 0)
_putchar('\n');
}
