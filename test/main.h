#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>

int _putchar(char c);
int print_int(va_list list);
int print_unsigned(va_list list);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_str(va_list list);
int print_percent(void);
void print_binary(unsigned int n, unsigned int *printed);
int print_unsignedToBinary(va_list list);
int print_oct(va_list list);
int print_unsignedIntToHex(unsigned int num, char _case);
int print_hex_base(va_list list, char _case);
int print_hex(va_list list);
int print_HEX(va_list list);
int print_STR(va_list list);

/**
 * struct format_Struct - structure format
 * @speci: type
 * @printedfunc: function to print
 */
typedef struct format_Struct
{
char *speci;
int (*printedfunc)(va_list);
} format_Struct;

#endif
