#include "main.h"

/**
 * printf_char - prints a char.
 *
 * @args: arguments.
 *
 * Return: 1.
 */

int printf_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
