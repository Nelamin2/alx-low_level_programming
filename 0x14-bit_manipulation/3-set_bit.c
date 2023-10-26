#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: index of the bit to set to 1
 *
 * Return: 1 if success, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int setbit;
if (index > (sizeof(unsigned long int) * 8)
return (-1);
mask = 1;
mask = mask << index;
*n = (*n | mask);
return (1);
}

