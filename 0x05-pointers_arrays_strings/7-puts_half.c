#inlcude "main.h"

/**
* puts_half - start program
* @str: string
* Return: is 0 (Success)
*/

void puts_half(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
;
i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
