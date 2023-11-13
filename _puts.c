#include "main.h"

/**
* _puts - writes a string to stdout
* @str: The string to print
*
* Return: The number of characters printed
*/
int _puts(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		count += _putchar(*str);
		str++;
	}

	return count;
}
