#include "main.h"

/**
* _islower - start program
*
* @c: recived value
* Return: is 1 = true. 0 = false.
*/
int _islower(int c)
{
int r = 'a';

for (r = 'a'; r <= 'z'; r++)
{
if (c == r)
{
return (1);
}
}
return (0);
}
