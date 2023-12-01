#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * handle_specifier - Prints an argument based on its type
 *
 * @specifier: Formatted specifier to print the arguments.
 * @args: List of arguments to be printed.
 * Return: 1 or 2;
 */

int handle_specifier(char specifier, va_list args)
{
	specifier_t specifiers[] = {
	{'c', _printf_char}, {'d', _printf_integer}, {'i', _printf_integer},
	{'s', _printf_string}, {'%', _printf_percent},
	{'\0', NULL} /* End of the array */
	};

	specifier_t *current_specifier = specifiers;

	while (current_specifier->c != '\0')
	{
		if (current_specifier->c == specifier)
		{
			return (current_specifier->handler(args));
		}
		current_specifier++;
	}
	return (_putchar('%') + _putchar(specifier));
}
