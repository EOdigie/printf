#include "main.h"
#include <stdarg.h>

/**
 * _print_string - prints output according to a format
 * @list: Argument
 * @len: length of the string
 *
 * Return: Number of characters printed
 */
int _print_string(va_list list, int len)
{
	const char *string = va_arg(list, const char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	while (*string)
	{
		len += _putchar(*string++);
	}
	return (len);
}
