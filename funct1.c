#include "main.h"

/************************* PRINT ADDRESS *************************/
/**
 * _printf_address - Function that print a type address
 *
 * @ptr: Pointed to address
 * Return: a address
*/

int _printf_address(void *ptr)
{
	if (ptr == NULL)
		return (_printf("(nil)"));
	return (_printf("%p", ptr));
}

/************************* PRINT CHARACTER *************************/
/**
 * _printf_char - Function that print a type char
 *
 * @args: Argument pointed to a character
 * Return: a integer
*/

int _printf_char(va_list args)
{
	char c;

	c = va_arg(args, int);

	return (_putchar(c));
}

/************************* PRINT A STRING *************************/
/**
 * _printf_string - Print a string
 *
 * @args: Argument pointed to a type string
 * Return: The lenght of a string
*/

int _printf_string(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}

/************************* PRINT PERCENT SIGN *************************/
/**
 * _printf_percent - Print a percent sign
 *
 * @args: Argument of the lists
 * Return: Always 1 (the lenght of a percent sign)
*/

int _printf_percent(va_list args)
{
	(void)va_arg(args, int);

	_putchar('%');

	return (1);
}
