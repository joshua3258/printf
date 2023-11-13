#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...) {
    va_list args;
    int count = 0;
    const char *ptr;

    va_start(args, format);

    for (ptr = format; *ptr != '\0'; ptr++) {
        if (*ptr == '%') {
            ptr++;  

            switch (*ptr) {
                case 'c':
                   count += write(1, (const void *)va_arg(args, int), 1); 
                    break;
                case 's':
                    count += write(1, va_arg(args, char *), 1);
                    break;
                case 'd':
                case 'i':
                    count += printf("%d", va_arg(args, int));
                    break;
                default:
                    count += write(1, "%", 1);
                    count += write(1, ptr, 1);
            }
        } else {
            count += write(1, ptr, 1);
        }
    }

    va_end(args);

    return count;
}
