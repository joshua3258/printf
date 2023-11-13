#include "main.h"

/**
 * _printf - custom printf function with limited functionality
 * @format: The format string
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...) {
    va_list args;
    int count = 0;
    const char *ptr;

    va_start(args, format);

    for (ptr = format; *ptr != '\0'; ptr++) {
        if (*ptr == '%' && *(ptr + 1) != '\0') {
            ptr++;
            count += handle_format_specifier(*ptr, args);
        } else {
            count += _putchar(*ptr);
        }
    }

    va_end(args);

    return count;
}
