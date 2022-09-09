#include <stdio.h>

/**
* main - start program
*
* Return: is 0 (Success)
*/
int main(void)
{
int rs;

for (rs = 'a'; rs <= 'z'; rs++)
putchar(rs);
for (rs = 'A'; rs <= 'Z'; rs++)
putchar(rs);
putchar('\n');
return (0);
}
