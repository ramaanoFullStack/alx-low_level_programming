#include <unistd.h>

/**
* _putchar - start program
*
* @c: print character
* Return: is 1 = true. 0 = false
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
