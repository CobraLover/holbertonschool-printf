#include "main.h"

/************************* PRINT ADDRESS *************************/
/**
 * print_address - Function that print a type address
 *
 * @ptr: Pointed to address
 * Return: a address
*/

int print_address(void *ptr)
{
	if (ptr == NULL)
		return _printf("(nil)");
	return _printf("%p", ptr);
}

/************************* PRINT CHARACTER *************************/
/**
 * print_char - Function that print a type char
 *
 * @args: Argument pointed to a character
 * Return: a integer
*/

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/************************* PRINT A STRING *************************/
/**
 * print_string - Print a string
 *
 * @args: Argument pointed to a type string
 * Return: The lenght of a string
*/

int print_string(va_list args)
{
	int length = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	return length;
}

/************************* PRINT PERCENT SIGN *************************/
/**
 * print_percent - Print a percent sign
 *
 * @args: Argument of the lists
 * Return: Always 1 (the lenght of a percent sign)
*/

int print_percent(va_list args)
{
	(void)va_arg(args, int);

	return (_putchar('%'));
}
