#include <stdio.h>

/**
* main - start program
*
* Return: is 0 (Success)
*/
int main(void)
{
char rs = 'a';

while (rs <= 'z')
{
if (rs != 'e' && rs != 'q')
{
putchar(rs);
}
rs++;
}
putchar('\n');
return (0);
}
