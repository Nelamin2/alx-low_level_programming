#include <stdio.h>
#include "main.h"


/**
*check - subfunction of the original function
*@n: integer number
*Return: void
*/

void check(unsigned long int n)
{
if (n == 0)
return;
check(n >> 1);
if ((n & 1) == 1)
_putchar('1');
if ((n & 1) == 0)
_putchar('0');
}

/**
*print_binary - converts an intiger number to binarry
*@n: integer number
*Return: void
*/

void print_binary(unsigned long int n)
{
if (n == 0)
_putchar('0');
else
check(n);
}
