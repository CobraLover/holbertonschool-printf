#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += putchar(va_arg(args, int));
					break;
				case 'd':
				case 'i':
					count += printf_integer(va_arg(args, int));
					break;
				case 'u':
					count += printf_unsigned_int(va_arg(args, unsigned int));
					break;
				case 'o':
					count += printf_octal(va_arg(args, unsigned int));
					break;
				case 'x':
				case 'X':
					count += printf_hex(va_arg(args, unsigned int), (*format == 'X'));
					break;
				case 's':
					count += printf_string(va_arg(args, char *));
					break;
				case 'p':
					count += printf_address(va_arg(args, void *));
					break;
				case '%':
					count += putchar('%');
					break;
				default:
					count += putchar('%');
					count += putchar(*format);
					break;
			}
		}
		else
		{
			count += putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
