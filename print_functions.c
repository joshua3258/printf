#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_char - Prints a character
 * @c: Character to print
 *
 * Return: The number of characters printed
 */
int print_char(char c) {
    return write(1, &c, 1);
}

/**
 * print_string - Prints a string
 * @str: String to print
 *
 * Return: The number of characters printed
 */
int print_string(char *str) {
    if (str == NULL) {
        str = "(null)";
    }
    return write(1, str, printf("%s", str));
}

/**
 * print_int - Prints an integer
 * @num: Integer to print
 *
 * Return: The number of characters printed
 */
int print_int(int num) {
    return printf("%d", num);
}

