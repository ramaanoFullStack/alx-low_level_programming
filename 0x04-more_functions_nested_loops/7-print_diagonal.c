#include "main.h"

/**
* print_diagonal - start program
*
* @n: \ to be printed
* Return: void
*/

void print_diagonal(int n)
{
int rsn = 0, rsnn;

while (rsn < n && n > 0)
{
rsnn = 0;
while (rsnn < rsn)
{
_putchar(' ');
rsnn++;
}

_putchar('\\');
_putchar('\n');
rsn++;
}
if (i == 0)
_putchar('\n');
}
