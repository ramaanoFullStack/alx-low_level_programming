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

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}
