#include "main.h"

/**
* _isalpha - start program
*
* @c: received value
* Return: is 1 = true. 0 = false
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
