#include "main.h"

/**
* *_strcat - start program
* @src: to append to @dest
* @dest: to be concatenated
* Return: to resulting string
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int dest_length = 0;

while (dest[i++])
dest_length++;
for (i = 0; src[i]; i++)
dest[dest_length++] = src[i];
return (dest);
}
