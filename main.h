#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);

int printf_integer(int n);
int printf_address(void *p);
int printf_string(char *s);
int printf_unsigned_int(unsigned int n);
int printf_octal(unsigned int n);
int printf_hex(unsigned int n, int uppercase);

#endif /* MAIN_H */
