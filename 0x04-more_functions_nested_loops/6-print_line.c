#include "main.h"

/**
* print_line - start program
* @n: integer
*
* Return: is 0 (Success)
*/

void print_line(int n)
{
int rsn = 0;

while (rsn < n && n > 0)
{
_putchar('_');
rsn++;
}
_putchar('\n');
}
