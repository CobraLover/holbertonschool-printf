#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/**
 * printf_integer - Print an integer
 * @n: Integer to print
 *
 * Return: Number of characters printed
 */

int printf_integer(int n)
{
	return (printf("%d", n));
}

/**
 * printf_address - Print a memory address
 * @p: Pointer to print
 *
 * Return: Number of characters printed
 */

int printf_address(void *p)
{
	return (printf("%p", p));
}

/**
 * printf_string - Print a string
 * @s: String to print
 *
 * Return: Number of characters printed
 */

int printf_string(char *s)
{
	if (s == NULL)
		return (printf("(null)"));
	return (printf("%s", s));
}
