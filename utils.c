#include "main.h"
#include <unistd.h>

/**
 * print_chars - Prints a character multiple times
 * @c: Character to print
 * @count: Number of times to print the character
 *
 * Return: The number of characters printed
 */
int print_chars(char c, int count) {
    int i, printed = 0;
    for (i = 0; i < count; i++) {
        printed += write(1, &c, 1);
    }
    return printed;
}
