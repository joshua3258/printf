
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>

int _printf(const char *format, ...);
int handle_plus_flag(int num);
int handle_space_flag(int num);
int handle_hash_flag(int num);
int get_width(const char *format, va_list args);
int handle_char(va_list args);
int handle_string(va_list args);
int handle_int(va_list args);
int handle_conversion_specifier(char specifier, va_list args);
int handle_precision_string(char *str, int precision);
int print_char(char c);
int print_string(char *str);
int print_int(int num);
int handle_size_long(va_list args);
int handle_size_long_long(va_list args);
int handle_size_short(va_list args);
int handle_size_unsigned(char specifier, va_list args);
int print_chars(char c, int count);

#endif /* MAIN_H */
