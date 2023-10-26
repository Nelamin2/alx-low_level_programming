#include <stdio.h>
#include "main.h"


/**
*check - subfunction of the original function
*@n: integer number
*Return: void
*/

void check(unsihgned long int n)
{
if (n == 0)
return;
check(n >> 1);
if ((n & 1) == 1)
printf("'1'\n");
if ((n & 1) == 0)
printf("'0'\n");
}

/**
*print_binary - converts an intiger number to binarry
*@n: integer number
*Return: void
*/

void print_binary(unsigned long int n)
{
if (n == 0)
printf("'0'\n");
else
{
check(n)
}

