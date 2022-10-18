#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

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
int print_specialHex(unsigned int c);
int hex_pointer(unsigned long int c);
int get_flags(const char *format, int *i);
char *malloc_str(char *str);
char *rot13(char *p);

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16


int print_char(va_list args);
int print_digit(va_list args);
int print_string(va_list args);
int print_mod(va_list args);
int print_binary(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_hexUpper(va_list args);
int print_unsigned(va_list args);
int print_stringHex(va_list args);
int print_pointer(va_list args);
int print_revString(va_list args);
int print_rot(va_list args);

#endif
