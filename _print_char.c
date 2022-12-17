#include "main.h"

/**
 * _print_char - prints characters
 * @list: The argument
 *
 * Return: Number of characters printed
 */
int _print_char(va_list list, int len)
{
	char c = va_arg(list, int);

	len += _putchar(c);
	return (_putchar(c));
}
