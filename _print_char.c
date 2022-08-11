#include "main.h"
#include <stdarg.h>

/**
 * _print_char - prints characters
 * @list: The argument
 *
 * Return: Number of characters printed
 */
int _print_char(va_list list)
{
	char c = va_arg(list, int);

	return (_putchar(c));
}
