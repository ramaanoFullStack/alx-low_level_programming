#include "main.h"

/**
* _isdigit - start program
*
* @c: variable carrier integer
* Return: is 1 = true. 0 = false
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);

else
return (0);
}
