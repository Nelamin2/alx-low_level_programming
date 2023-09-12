#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main function
 * Description: Find and print the first 98 fibonacci numbers starting with 1 and 2.
 * Return: 0
 * Numbers should be coma and space separated.
 */
int main(void)
{
	unsigned long int a = 0, c = 1, b = 0, d = 2;
	unsigned long int f1, f2, f3;
	int count;

	printf("%lu, %lu, ", c, d);
	for (count = 2; count < 98; count++)
	{
		if (c + d > LARGEST || b > 0 || a > 0)
		{
			f1 = (c + d) / LARGEST;
			f2 = (c + d) % LARGEST;
			f3 = a + b + f1;
			a = b, b = f3;
			c = d, d = f2;
			printf("%lu%010lu", b, d);
		}
		else
		{
			f2 = c + d;
			c = d, d = f2;
			printf("%lu", d);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
