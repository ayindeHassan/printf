
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct specifiers - Define a new struct of specifiers
 * @specifiers: Struct format
 * @f: The function associated
 */

typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;

/*prototypes*/
int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);



int print_char(va_list args);
int print_digit(va_list args);
int print_string(va_list args);
int print_mod(va_list args);
int print_binary(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_hexUpper(va_list args);


#endif
