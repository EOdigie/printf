#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: Specified format
 * Return: Number of charaters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int (*funct)(va_list, int);
	int i = 0;
	int len_printed = 0;

	va_start(list, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0' && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				len_printed += _putchar(format[i]);
				i++;
				continue;
			}
			if (format[i] == '\0')
				return (-1);
			funct = choose_func(format[i]);
			if (funct != NULL)
				len_printed = funct(list, len_printed);
			else
			{
				len_printed += _putchar(format[i - 1]);
				len_printed += _putchar(format[i]);
			}
			i++;
		}
		else
		{
			len_printed += _putchar(format[i]);
			i++;
		}
	}
	va_end(list);
	return (len_printed);
}
