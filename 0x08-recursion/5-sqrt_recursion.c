#include "main.h"

int test_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
* test_sqrt - start program.
* @num: The number to find the square root of.
* @root: The root to be tested.
*
* Return: natural square root - the square root.
*         no natural square root - -1.
*/
int test_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);

if (root == num / 2)
return (-1);

return (test_sqrt(num, root + 1));
}

/**
* _sqrt_recursion - start program.
* @n: The number to return the square root of.
*
* Return: natural square root - root of n.
*         no natural square root - -1.
*/
int _sqrt_recursion(int n)
{
int root = 0;

if (n < 0)
return (-1);

if (n == 1)
return (1);

return (test_sqrt(n, root));
}
