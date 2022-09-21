#include <unistd.h>

/**
* _putchar - start program
* @c: character to print
* Return: is 1 (Success)
*/
int _putchar(char c)
{
  return (write(1, &c, 1));
}
