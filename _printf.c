#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/* Struct definition and specifier functions (as before) */

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	count = handle_format_string(format, args);

	va_end(args);
	return (count);
}
