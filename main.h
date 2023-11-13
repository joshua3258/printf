#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _handle_format_specifier(char specifier, va_list args);
int _puts(char *str);


#endif
