#include <main.h>

/**
* _islower - start program
*
* Return: is 1 = true. 0 = false.
*/
int _islower(int rs)
{
int rsn = 'a';

for (rsn = 'a';rsn <= 'z'; rsn++)
{
if (rs == rsn)
{
return (1);
}
}
return (0);
}
