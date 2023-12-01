#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifier - Struct to store information about format specifiers
 * @c: Format specifier character
 * @handler: Pointer to the function that handles the specifier
 */

typedef struct specifier
{
	char c;
	int (*handler)(va_list args);
} specifier_t;

int _putchar(char c);
int _printf(const char *format, ...);
int handle_specifier(char specifier, va_list args);
int handle_format_string(const char *format, va_list args);

/****************** FUNCTIONS ******************/

/* Funtions to print chars and strings */
int _printf_address(void *ptr);
int _printf_char(va_list args);
int _printf_string(va_list args);
int _printf_percent(va_list args);

/* Functions to print numbers */
int _printf_integer(va_list args);
int _printf_unsigned_int(unsigned int num);

#endif /* MAIN_H */
