#include "main.h"

/**
* print_triangle - start program
*
* @size: interger
* Return: void
*/

void print_triangle(int size)
{
int rsn = 1, rsnn;

while (rsn <= size && size > 0)
{
rsnn = 0;
while (rsnn < size - rsn)
{
_putchar(' ');
rsnn++;
}
rsnn = 0;
while (rsnn < rsn)
{
_putchar('#');
rsnn++;
}

_putchar('\n');
rsn++;
}
if (rsn == 1)
_putchar('\n');
}
