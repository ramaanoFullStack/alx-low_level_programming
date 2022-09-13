#include "main.h"

/**
* print_rsalphabet - start program
*
* Return: void
*/
void print_rsalphabet(void)
{
char rsletter = 'a';

while (rsletter <= 'z')
{
_putchar(rsletter);
rsletter++;
}
_putchar('\n');
}
