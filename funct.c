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
		return (print_unsigned_int((unsigned int)(-num)));
	}
	return (print_unsigned_int((unsigned int)num));
}

/************************* PRINT UNSIGNED NUMBER *************************/
/**
 * print_unsigned_int - Print a unsigned integer
 *
 * @args: Argument to print a unsigned integer
 * Return: The length of the integer printed
*/

int print_unsigned_int(unsigned int num)
{
	int i, length = 0;
	char buffer[20]; /* Assuming a maximum of 20 digits for an unsigned int */

	if (num == 0)
	return (_putchar('0'));

	while (num > 0)
	{
		buffer[length++] = (num % 10) + '0';
		num /= 10;
	}
	/* Print the digits in reverse order */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}
	return (length);
}
