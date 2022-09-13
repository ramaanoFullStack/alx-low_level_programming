#include "main.h"

/**
* times_table - start program
*
* Return: void
*/
void times_table(void)
{
  int row, column, multiply, double, single;

  for (row = 0; row <= 9; row++)
    {
      for (column = 0; column <= 9; column++)
	{
	  multiply = row * column;
	  double = multiply / 10;
	  single = multiply % 10;

	  if (column == 0)
	    {
	      _putchar('0');
	    }
	  else if (multiply < 10)
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar(' ');
	      _putchar(ones + '0');
	    }
	  else
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar(double + '0');
	      _putchar(single + '0');
	    }
	}
      _putchar('\n');
    }
}
