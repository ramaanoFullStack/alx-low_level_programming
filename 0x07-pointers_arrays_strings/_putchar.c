#include <unistd.h>

/**
* _putchar - writes c to stdout
* @c: character to print
* Return: 1 is Success
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
