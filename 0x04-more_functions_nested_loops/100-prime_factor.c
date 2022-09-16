#include <stdio.h>

/**
* main - start program
*
* Return: is 0 (Success)
*/

int main(void)
{
long rsn = 612852475143;
long divisor = 2;
long large_primefactor = 0;

while (rsn != 1)
{
if (rsn % divisor == 0)
{
rsn = rsn / divisor;
large_primefactor = divisor;
}
divisor += 1;
}
printf("%ld\n", large_primefactor);
return (0);
}
