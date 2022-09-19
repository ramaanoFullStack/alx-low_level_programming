#include "main.h"

/**
* print_rev - start program
* @s: reference pointer
* Return: is 0 (Success)
*/
void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;
while (i--)
_putchar(s[i]);
_putchar('\n');
}
