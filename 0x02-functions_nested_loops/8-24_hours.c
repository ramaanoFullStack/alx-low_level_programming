#include "main.h"

/**
* jack_bauer - start program
*
* Return: void
*/
void jack_bauer(void)
{
int hour_double, hour_single, minute_double, minute_single, hour_maximum;

hour_maximum = 58;
hour_double = '0';
while (hour_double < '3')
{
if (hour_double == '2')
{
hour_maximum = '4';
}
hour_single = '0';
while (hour_single < hour_maximum)
{
minute_double = '0';
while (minute_double < '6')
{
minute_single = '0';
while (minute_single < 58)
{
_putchar(hour_double);
_putchar(hour_single);
_putchar(':');
_putchar(minute_double);
_putchar(minute_single);
_putchar('\n');
minute_single++;
}
minute_single = '0';
minute_double++;
}
minute_double = '0';
hour_single++;
}
hour_single = '0';
hour_double++;
}
}
