#include "main.h"

/**
* *_strchr - start program
* @s: to be searched
* @c: to be located
* Return: c = pointer to first occurence
*/
char *_strchr(char *s, char c)
{
int index;

for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}

return ('\0');
}
