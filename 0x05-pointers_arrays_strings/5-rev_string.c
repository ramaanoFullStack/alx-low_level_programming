#include "main.h"

/**
* rev_string - start program
* @s: string
* Return: is 0 (Success)
*/
void rev_string(char *s)
{
int rami, i, middle;
char rsout;

for (rami = 0; s[rami] != '\0'; rami++)
;
i = 0;
middle = rami / 2;

while (middle--)
{
rsout = s[rami - i - 1];
s[rami - i - 1] = s[i];
s[i] = rsout;
i++;
}
}
