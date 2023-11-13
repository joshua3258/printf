#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * get_width - Extracts the field width from the format string
 * @format: Format string
 * @args: Variable arguments list
 *
 * Return: The field width
 */
int get_width(const char *format, va_list args) {
    int width = 0;

    while (*format) {
        if (*format >= '0' && *format <= '9') {
            width = width * 10 + (*format - '0');
        } else if (*format == '*') {
            width = va_arg(args, int);
            if (width < 0) {
                width = -width;
            }
            return width;
        } else {
            break;
        }

        format++;
    }

    return width;
}
