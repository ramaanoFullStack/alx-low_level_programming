#include <unistd.h>

/**
* _putchar - start program
*
* Return: is 1 (Success)
*/
int _putchar(char rs)
{
  return (write(1, &rs, 1));
}
