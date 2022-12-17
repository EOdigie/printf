#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <unistd.h>

typedef struct order
{
	char spec;
	int (*funct)(va_list, int);
} forms;


int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list list, int len);
int _print_int(va_list list);
int _print_string(va_list list, int len);
int (*choose_func(char c))(va_list, int);

#endif
