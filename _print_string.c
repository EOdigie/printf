#include "main.h"
#include <stdarg.h>

/**
 * _print_string - prints output according to a format
 * @list: Argument
 *
 * Return: Number of characters printed
 */
int _print_string(va_list list)
{
	int j = 0;
	char *string = va_arg(list, char *);

	while (string[i] != '\0')
	{
		_putchar(string[j]);
		j++;
	}
	return (0);
}
