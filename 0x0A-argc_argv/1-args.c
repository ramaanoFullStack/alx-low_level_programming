#include <stdio.h>
#include "main.h"

/**
* main - Start program
* @argc: Number of command line arguments
* @argv: Array name
* Return: is 0 (Success)
*/
int main(int argc, char *argv[])
{
int i;

if (argc == 1)
printf("%d\n", argc - 1);
else
{
for (i = 0; *argv; i++, argv++)
;

printf("%d\n", i - 1);
}

return (0);
}
