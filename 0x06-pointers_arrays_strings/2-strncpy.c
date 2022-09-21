#include "main.h"

/**
* *_strncpy - start program
* @n: number of bytes
* @src: source string
* @dest: buffer storage
*
* Return: resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, src_length = 0;

while (src[i++])
src_length++;

for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];

for (i = src_length; i < n; i++)
dest[i] = '\0';

return (dest);
}
