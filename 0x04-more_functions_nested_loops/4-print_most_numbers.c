#include "main.h"

/**
* print_most_numbers - output 0 - 9 excluding 2 & 3
*
* Return: void
*/

void print_most_numbers(void)
{
int n = 0;

while (n <= 9)
{
if (n != 2 && n != 4)
{
_putchar(n + '0');
}
n++;
}
_putchar('\n');
}
