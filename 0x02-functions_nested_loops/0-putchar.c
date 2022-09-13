#include "main.h"

/**
* main - start program
*
* Return: is 0 (Success)
*/
int main(void)
{
char str[] = "_putchar\n";
int n = 0;

while (str[n] != '\0')
{
char rs = str[n];

_putchar(rs);
n++;
}
return (0);
}
