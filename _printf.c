#include "main.h"

/**
 * _printf - Function that print all types
 *
 * @format: Arguments of list types passed to the function
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int length = 0, fnd_format = 0, fmt_index = 0, index_fmt = 0;
	va_list args;

	fmt_t fmt[] = {
	{"c", print_char}, {"d", print_integer}, {"i", print_integer},
	{"s", print_string}, {"%", print_percent},
	{NULL, NULL}
	};

	va_start(args, format);

	for (index_fmt = 0; format != NULL && format[index_fmt] != '\0'; index_fmt++)
	{
		if (format[index_fmt] == '%')
		{
			fmt_index = 0, fnd_format = 0;
			for (; fmt[fmt_index].fmt != NULL; fmt_index++)
			{
				if (format[index_fmt + 1] == *(fmt[fmt_index].fmt))
				{
					length += fmt[fmt_index].fct(args);
					fnd_format = 1;
					break;
				}
			}
			if (!fnd_format)
			{
				length += _putchar('%');
				length += _putchar(format[index_fmt + 1]);
			}
			index_fmt++;
		}
		else
		{
			length += _putchar(format[index_fmt]);
		}
	}
	va_end(args);
	return (length);
}
