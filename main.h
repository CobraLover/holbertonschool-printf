#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct fmt_t - Struct op
 *
 * @fmt: The format specifier
 * @fct: The function associated.
 */

typedef struct fmt_t
{
	const char *fmt;
	int (*fct)(va_list);
} fmt_t;

int _putchar(char c);
int _printf(const char *format, ...);

/****************** FUNCTIONS ******************/

/* Funtions to print chars and strings */
int print_address(void *ptr);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

/* Functions to print numbers */
int print_integer(va_list args);
int print_unsigned_int(unsigned int num);

#endif /* MAIN_H */
