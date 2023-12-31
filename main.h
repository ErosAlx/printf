#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i,u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _strlenc(const char *s);
int _strlen(char *s);
int printf_37(void);
int printf_char(va_list args);
int printf_string(va_list args);
int _putchar(char c);
int printf_int(va_list args);
int printf_dec(va_list args);
int _printf(const char *format, ...);
int printf_bin(va_list args);
int printf_unsigned(va_list args);
int printf_oct(va_list args);
int printf_hex(va_list args);
int printf_HEX(va_list args);

#endif /* MAIN_H */
