#include "main.h"

/**
* print_alphabet - start program
*
* Return: void
*/
void print_alphabet(void)
{
char rsletter = 'a';

while (rsletter <= 'z')
{
_putchar(rsletter);
rsletter++;
}
_putchar('\n');
}
