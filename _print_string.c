#include "main.h"
#include <stdarg.h>

/**
 * _print_string - prints output according to a format
 * @list: Argument
 *
 * Return: Number of characters printed
 */
int _print_string(va_list list, char *buf, unsigned int ibuf)
{
	char *str
	unsigned int i;
	char nill[] = "(null)";
	char *string = va_arg(list, char *);
	
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		ibuf = handl_buf(buf; str[i], ibuf);
	return (i);
}
