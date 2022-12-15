#include "main.h"

/**
* *_strpbrk - start program
* @s: to be searched
* @accept: searched for
* Return: matched -pointer to byte
*/
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}

s++;
}
return ('\0');
}
