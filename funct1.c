#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/**
 * printf_unsigned_int - Print an unsigned integer
 * @n: Unsigned integer to print
 *
 * Return: Number of characters printed
 */

int printf_unsigned_int(unsigned int n)
{
	return (printf("%u", n));
}

/**
 * printf_octal - Print an unsigned integer in octal format
 * @n: Unsigned integer to print
 *
 * Return: Number of characters printed
 */

int printf_octal(unsigned int n)
{
	return (printf("%o", n));
}

/**
 * printf_hex - Print an unsigned integer in hexadecimal format
 * @n: Unsigned integer to print
 * @uppercase: Whether to use uppercase letters in hexadecimal (X)
 *
 * Return: Number of characters printed
 */

int printf_hex(unsigned int n, int uppercase)
{
	return (printf(uppercase ? "%X" : "%x", n));
}
