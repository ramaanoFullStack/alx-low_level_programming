#include <main.h>

/**
* _islower - start program
*
* Return: is 1 = true. 0 = false.
*/
int _islower(int rs)
{
int r = 'a';

for (r = 'a';r <= 'z'; r++)
{
if (rs == r)
{
return (1);
}
}
return (0);
}
