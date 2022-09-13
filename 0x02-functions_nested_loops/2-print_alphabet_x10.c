#include "main.h"

/**
* print_alphabet_x10 - start program
*
* Return: void
*/
void print_alphabet_x10(void)
{
char rs;
int n = 0;

while (n <= 9)
{
for (rs = 'a'; rs <= 'z'; rs++)
{
_putchar(rs);
}

_putchar('\n');
n++;
}
}
