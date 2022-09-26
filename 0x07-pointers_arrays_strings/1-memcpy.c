#include "main.h"

/**
* *_memcpy - start program
* @dest: memory
* @src: source
* @n: length
* Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
