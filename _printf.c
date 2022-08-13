#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: Specified format
 * Return: Number of charaters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int (*funct)(va_list);
	int i = 0;
	int len_printed = 0;

	if (format == NULL)
		return (-1);
	
	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			func = get_func(format[i + 1]);
			if (func == NULL)
				len_printed += print_nan(format[i], format[i + 1]);
			else
				count += func(list)
			i++;
		}
		else
		{
		_putchar(format[i]);
		len_printed++;
		}
		i++;
	}
	va_end(list);
	return(len_printed);
}
