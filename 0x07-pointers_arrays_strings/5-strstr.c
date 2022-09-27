#include "main.h"

/**
* *_strstr - start program
* @haystack: to be searched
* @needle: to be located
* Return: located - pointer to the beginning of substring
*/
char *_strstr(char *haystack, char *needle)
{
int i;

if (*needle == 0)
return (haystack);

while (*haystack)
{
i = 0;

if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
return (haystack);

i++;

} while (haystack[i] == needle[i]);
}

haystack++;
}

return ('\0');
}
