#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * handle_char - Handles the 'c' conversion specifier
 * @args: Variable arguments list
 *
 * Return: The number of characters printed
 */
int handle_char(va_list args) {
    char c = va_arg(args, int);
    return write(1, &c, 1);
}

/**
 * handle_string - Handles the 's' conversion specifier
 * @args: Variable arguments list
 *
 * Return: The number of characters printed
 */
int handle_string(va_list args) {
    char *str = va_arg(args, char *);
    if (str == NULL) {
        str = "(null)";
    }
    return write(1, str, printf("%s", str));
}

/**
 * handle_int - Handles the 'd' and 'i' conversion specifiers
 * @args: Variable arguments list
 *
 * Return: The number of characters printed
 */
int handle_int(va_list args) {
    int num = va_arg(args, int);
    return printf("%d", num);
}
