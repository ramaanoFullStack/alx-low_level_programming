#include <stdio.h>

/**
* main - start program
*
* Return: is 0 (Success)
*/
int main(void)
{
int rsn;

for (rsn = 48; rsn < 58; rsn++)
{
putchar(rsn);
if (rsn != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
