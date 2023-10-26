#include <stdio.h>
#include <string.h>
#include "main.h"

/*
*binary_to_uint - a function that converts a binary number to an unsigned int
*@b: pointer to the string
*Return: the converted number, or 0 if
**/
unsigned int binary_to_uint(const char *b)
{
unsigned int x, i, j;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
for (j = 0;  b[j] != '\0'; j++)
{
x <<= 1;
if (b[j] == '1')
x += 1;
}
return (x);
}
