#include "main.h"

/**
* print_last_digit - start program
*
* @n: interger is n
* Return: interger
*/
int print_last_digit(int n)
{
int lastn = n % 10;

if (n < 0)
{
lastn = lastn * -1;
}
_putchar(lastn + '0');
return (lastn);
}
