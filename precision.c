#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * handle_precision_string - Handles precision for the 's' conversion specifier
 * @str: String to be printed
 * @precision: Precision value
 *
 * Return: The number of characters printed
 */
int handle_precision_string(char *str, int precision) {
    if (precision >= 0) {
        return write(1, str, printf("%.*s", precision, str));
    } else {
        return write(1, str, printf("%s", str));
    }
}
