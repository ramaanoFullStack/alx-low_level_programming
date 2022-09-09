#include <stdio.h>

/**
* main - start program
*
* Return: is 0 (Success)
*/
int main(void)
{
int rsn;
char rs;

for (rsn = 48; rsn < 58; rsn++)
{
putchar(rsn);
}
for (rs = 'a'; rs <= 'f'; rs++)
{
putchar(rs);
}
putchar('\n');
return (0);
}
