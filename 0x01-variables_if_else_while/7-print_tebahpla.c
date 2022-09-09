#include <stdio.h>

/**
* main - start program
*
* Return: is 0 (Success)
*/
int main(void)
{
char rs;
for (rs = 'z'; rs >= 'a'; rs--)
{
putchar(rs);
}
putchar('\n');
return (0);
}
