#include "main.h"

/**
* reverse_array - start program
* @a: intergers to be reversed
* @n: elemnets in array
*/
void reverse_array(int *a, int n)
{
int rsn, i;

for (i = n - 1; i >= n / 2; i--)
{
rsn = a[n - 1 - i];
a[n- 1 - i] = a[i];
a[i] = rsn;
}
}
