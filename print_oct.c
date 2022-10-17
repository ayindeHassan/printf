#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_octal - print a
 *@args:unsigned integer input
 *
 * Return: no return
 */
int print_octal(va_list args)
{
	unsigned int c;
	int  i, j;
	int arr[100];

	c = va_arg(args, unsigned int);
	i = 0;
	if (c == 0)
	{
		_putchar('0');
		return (1);
	}
	while (c != 0)
	{
		arr[i] = c % 8;
		c = c / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j] + '0');
	return (i);
}