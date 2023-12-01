#include "main.h"

/************************* PRINT INTEGER *************************/
/**
 * print_integer - Function that prints a integer
 *
 * @args: Argument pointed to an integer
 * Return: The lenght of the integer printed
*/

int print_integer(va_list args)
{
	int num;

	num = va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		return (print_unsigned_int(-num) + 1);
	}
	return (print_unsigned_int(num));
}

/************************* PRINT UNSIGNED NUMBER *************************/
/**
 * print_unsigned_int - Print a unsigned integer
 *
 * @num: Argument to print a unsigned integer
 * Return: The length of the integer printed
*/

int print_unsigned_int(unsigned int num)
{
	int length = 0;

	if (num == 0)
		return (_putchar('0'));

	if ((num / 10) != 0)
		length += print_unsigned_int(num / 10);

	return (length + _putchar('0' + (num % 10)));
}
