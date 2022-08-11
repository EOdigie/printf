#include "main.h"
#include <stddef.h>

/**
 * *choose_func - selects the functions output according to a format
 * @c: Specified format
 * @va-list: Specified format
 * Return: The function to be used
 */
int (*choose_func(char c))(va_list)
{
	if (c == 'c')
		return (_print_char);
	if (c == 's')
		return (_print_str);

	return (NULL);
}
