#include "main.h"
#include <studio.h>

/**
 * reset_to_98 - a function that takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: input
 * Return: n
 */

void reset_to_98(int *n)
{
    *n = 98; // Update the value pointed to by ptr to 98
}

int main()
{
    int num = 42; // Declare an integer variable
    int *n = &num; // Create a pointer to num

    printf("Before update: num = %d\n", num);

    // Call the function to update the value
    reset_to_98(ptr);

    printf("After update: num = %d\n", num);

    return 0;
}
