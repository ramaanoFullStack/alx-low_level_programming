#include "main.h"

/**
* _strlen - start program
* @s: string
*
* Return: integer length
*/
int _strlen(char *s)
{
int length = 0;

while (s[length])
length++;
return (length);
}
