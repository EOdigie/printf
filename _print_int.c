#include "main.h"


/**
 * find_length - counts length of characters to be printed
 * @n: number to be printed
 * @base: base to be printed
 * Return: length of number
*/
unsigned int find_length(unsigned int n, int base)
{
	unsigned int count;

	count = 0;
	while (n > 0)
	{
		n = n / base;
		if (n == 0)
			break;
		count++;
	}
	return (count);
}

/**
 * print_numbers - prints number based on base
 * @n: number to be printed
 * @base: base for printing
 * @digits: digits found on the base
 * Return: length
*/
int print_numbers(unsigned long n, unsigned int base, const char *digits)
{
	if (n >= base)
		print_numbers((n / base), base, digits);
	_putchar(digits[n % base]);
	return (find_length(n, base) + 1);
}

/**
 * _putchar_int - prints integers
 * @n: number
 * @len: length if integr
 * Return: new length of integer
*/
int _putchar_int(int n, int len)
{
	unsigned long num;

	if (n < 0)
	{
		len += _putchar('-');
		num = -(unsigned int)n;
	}
	else
	{
		num = n;
	}
	len += print_numbers(num, 10, "0123456789");

	return (len);
}

/**
 * _print_int - prints an integer
 * @list: the argument
 * @len: length of integer
 * Return: length on new integer
*/
int _print_int(va_list list, int len)
{
	int n;

	n = va_arg(list, int);

	len = _putchar_int(n, len);
	return (len);
}
