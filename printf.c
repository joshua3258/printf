#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			/*Handle the conversion specifiers*/
			format++;

			switch (*format)
			{
				case 'c':
				{
					char c = (char)va_arg(args, int);

					putchar(c);
					count++;
					break;
				}
				case 's':
				{
					char *str = va_arg(args, char *);

					while (*str)
					{
						putchar(*str);
						count++;
						str++;
					}
					break;
				}
			case '%':
				putchar('%');
				count++;
				break;
				default:
				/*Ignore unsupported conversion specifiers*/
				break;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}

		format++;
	}
	va_end(args);
	return (count);
}
