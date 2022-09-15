#include "main.h"

/**
* print_numbers - print numbers from 0 - 9
*
* Return: void
*/

void print_numbers(void)
{
char n = 0;

while (n <= 9)
{
_putchar(n + '0');
n++;
}
_putchar('\n');
}
