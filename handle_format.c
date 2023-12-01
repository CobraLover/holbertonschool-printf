#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * handle_format_string - Prints an argument based on its type
 *
 * @format: Formatted string in which to print the arguments.
 * @args: List of arguments to be printed.
 * Return: 1 or 2;
 */

int handle_format_string(const char *format, va_list args)
{
	int count = 0;

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			count += handle_specifier(*format, args);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	return (count);
}
