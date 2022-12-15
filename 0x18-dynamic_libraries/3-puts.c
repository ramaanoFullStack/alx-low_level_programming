#include "main.h"

/**
* _puts - prints a string
* @str: pointer
*
* Return: is 0 (Success)
*/
void _puts(char *str)
{
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
