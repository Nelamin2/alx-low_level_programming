#include <stdio.h>

int _strlen_recursion(char *s) {
    // Base case: if the current character is null terminator, return 0
    if (*s == '\0') {
        return 0;
    } else {
        // Recursively call the function with the next character in the string
        // and add 1 to the result (for the current character)
        return 1 + _strlen_recursion(s + 1);
    }
}
