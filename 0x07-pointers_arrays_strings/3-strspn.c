#include "main.h"

/**
*_strspn - start program
* @s: to be searched
* @accept: to be measured
* Return: bytes in s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
bytes++;
break;
}

else if (accept[i + 1] == '\0')
return (bytes);
}

s++;
}

return (bytes);
}
