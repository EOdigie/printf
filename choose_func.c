#include "main.h"
#include <stddef.h>

/**
 * *choose_func - selects the functions output according to a format
 * @c: Specified format
 * @va-list: Specified format
 * Return: The function to be used
 */
int (*choose_func(char c))(va_list, int)
{
	forms specifiers[] = {
		{'c', _print_char},
		{'s', _print_string}
	};

	int i;

	for (i = 0; specifiers[i].spec; i++)
	{
		if (c == specifiers[i].spec)
		{
			return specifiers[i].funct;
		}
	}
	return (NULL);
}
