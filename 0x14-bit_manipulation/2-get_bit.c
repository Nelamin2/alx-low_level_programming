#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check bits in
 * @index: index
 * Return: value of the bit, or -1 if there is an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int counter;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
for (counter = 0; counter < index; counter++)
n = n >> 1;
return ((n & 1));
}

