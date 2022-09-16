#include "main.h"

/**
* more_numbers - output 0 - 14
*
* Return: void
*/

void more_numbers(void)
{
char rsn, rs;
int n = 0;

while (n < 10)
{
for (rsn = 0; rsn <= 14; rsn++)
{
rs = rsn;
if (rsn > 9)
{
_putchar('1');
rs = rsn % 10;
}
_putchar('0' + rs);
}
_putchar('\n');
n++;
}
}
