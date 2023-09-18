#include "main.h"

/**
 * _strlen - returns the length of a string
 * @p: string
 * Return: length
 */
int _strlen(char *p)
{
	int longi = 0;

	while (*p != '\0')
	{
		longi++;
		p++;
	}

	return (longi);
}

