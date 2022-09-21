#include "main.h"

/**
* _strcmp - start program
* @s1: pointer 1
* @s2: pionter 2
* Return: if str1 < str2 the difference
*/
int _strcmp(char *s1, char *s2)
{
while ((*s1 && *s2) && (*s1 == *s2))
{
s1++;
s2++;
}

return (*s1 - *s2);
}
