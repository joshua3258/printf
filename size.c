#include "main.h"
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>

/**
 * handle_size_long - Handles the 'l' length modifier
 * @args: Variable arguments list
 *
 * Return: The number of characters printed
 */
int handle_size_long(va_list args) {
   int64_t num = va_arg(args, int64_t); 
    return printf("%ld", num);
}

/**
 * handle_size_long_long - Handles the 'll' length modifier
 * @args: Variable arguments list
 *
 * Return: The number of characters printed
 */
int handle_size_long_long(va_list args) {
   int64_t num = va_arg(args, int64_t); 
    return printf("%lld", num);
}

/**
 * handle_size_short - Handles the 'h' length modifier
 * @args: Variable arguments list
 *
 * Return: The number of characters printed
 */
int handle_size_short(va_list args) {
    short num = (short)va_arg(args, int);
    return printf("%hd", num);
}

/**
 * handle_size_unsigned - Handles the 'u', 'o', 'x', and 'X' conversion specifiers with 'h' or 'l' length modifiers
 * @specifier: Conversion specifier character
 * @args: Variable arguments list
 *
 * Return: The number of characters printed
 */
int handle_size_unsigned(char specifier, va_list args) {
    switch (specifier) {
        case 'u':
            return printf("%lu", va_arg(args, unsigned long));
        case 'o':
            return printf("%lo", va_arg(args, unsigned long));
        case 'x':
            return printf("%lx", va_arg(args, unsigned long));
        case 'X':
            return printf("%lX", va_arg(args, unsigned long));
        default:
            return 0;
    }
}
