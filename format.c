#include "main.h"

/**
 * handle_format_specifier - handles conversion specifiers
 * @specifier: The conversion specifier character
 * @args: The va_list of arguments
 *
 * Return: The number of characters printed for the specifier
 */
int handle_format_specifier(char specifier, va_list args)
{
	int count = 0;

	switch (specifier)
	{
		case 'c':
		count += _putchar(va_arg(args, int));
		break;
		case 's':
		count += _puts(va_arg(args, char *));
		break;
		case '%':
		count += _putchar('%');
		break;
		default:
		count += _putchar('%');
		count += _putchar(specifier);
	}

	return count;
}
