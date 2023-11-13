#include "main.h"
#include <stdarg.h>

/**
 * handle_conversion_specifier - Dispatches the appropriate handler based on the conversion specifier
 * @specifier: Conversion specifier character
 * @args: Variable arguments list
 *
 * Return: The number of characters printed
 */
int handle_conversion_specifier(char specifier, va_list args) {
    switch (specifier) {
        case 'c':
            return handle_char(args);
        case 's':
            return handle_string(args);
        case 'd':
        case 'i':
            return handle_int(args);
        default:
            return 0; 
    }
}
