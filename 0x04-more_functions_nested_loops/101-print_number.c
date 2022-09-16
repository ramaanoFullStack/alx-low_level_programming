#include "main.h"

/**
 * print_number - start program
 *
 * @n: printed
 * Return: void
 */

void print_number(int n)
{
unsigned int rsn;

rsn = n;
if (n < 0)
{
_putchar(45);
rsn = -n;
}
if (rsn / 10)
print_number(rsn / 10);
_putchar((rsn % 10) + '0');
}
