#include "main.h"

/**
 * _print_char - prints characters
 * @list: The argument
 * @len: length of string
 *
 * Return: Number of characters printed
 */
int _print_char(va_list list, int len)
{
	char c = va_arg(list, int);

	len += _putchar(c);
	return (len);
}
