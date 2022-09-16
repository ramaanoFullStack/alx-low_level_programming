#include <stdio.h>

/**
* main - start program
*
* Return: void
*/

int main(void)
{
int rsn = 1;

while (rsn <= 100)
{
if (rsn % 3 == 0 && rsn % 5 == 0)
{
printf("FizzBuzz");
}
else if (rsn % 3 == 0)
{
printf("Fizz");
}
else if (rsn % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%rsn", rsn);
}
if (rsn != 100)
{
putchar(' ');
}

rsn++;
}
putchar('\n');
return (0);
}
