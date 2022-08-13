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

	if (format == NULL || *format == '\0')
	{
		return (-1);
	}
	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len_printed++;
		}
		else if (format[i + 1] == '%')
		{
			i++;
			_putchar('%');
			len_printed++;
		}
		else
		{
			funct = choose_func(format[i + 1]);
			if (funct != NULL)
			{
				len_printed += funct(list);
				i++;
			}
		}
		i++;
	}
	va_end(list);
	return (len_printed);
}
