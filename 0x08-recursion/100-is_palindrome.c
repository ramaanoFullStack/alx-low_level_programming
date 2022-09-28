#include "main.h"

int test_strlen(char *s);
int check_palindrome(char *s, int len, int i);
int is_palindrome(char *s);

/**
* test_strlen - start program.
* @s: string to be measured.
*
* Return: The length of the string.
*/
int test_strlen(char *s)
{
int len = 0;

if (*(s + len))
{
len++;
len += test_strlen(s + len);
}

return (len);
}

/**
* check_palindrome - start program.
* @s: string to be checked.
* @len: length of s.
* @i: string to be checked.
*
* Return: a palindrome - 1.
*         not a palindrome - 0.
*/
int check_palindrome(char *s, int len, int i)
{
if (s[i] == s[len / 2])
return (1);

if (s[i] == s[len - i - 1])
return (check_palindrome(s, len, i + 1));

return (0);
}

/**
* is_palindrome - start program.
* @s: string to be checked.
*
* Return: a palindrome - 1.
*         not a palindrome - 0.
*/
int is_palindrome(char *s)
{
int i = 0;
int len = test_strlen(s);

if (!(*s))
return (1);

return (check_palindrome(s, len, i));
}
