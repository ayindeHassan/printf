#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_hex - print a
 *@args:unsigned integer input
 *
 * Return: no return
 */
int print_hex(va_list args)
{
	unsigned int c;
	int  i, j, temp;
	int arr[100];

	c = va_arg(args, unsigned int);
	i = 0;
	temp = 0;
	if (c == 0)
	{
		_putchar('0');
		return (1);
	}
	while (c != 0)
	{
		temp = c % 16;
		if (temp < 10)
			arr[i] = 48 + temp;
		else
			arr[i] = 87 + temp;
		c = c / 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (i);
}
/**
* print_hexUpper - print a
*@args:unsigned integer input
*
* Return: no return
*/
int print_hexUpper(va_list args)
{
	unsigned int c;
	int  i, j, temp;
	int arr[100];

	c = va_arg(args, unsigned int);
	i = 0;
	temp = 0;
	if (c == 0)
	{
		_putchar('0');
		return (1);
	}
	while (c != 0)
	{
		temp = c % 16;
		if (temp < 10)
			arr[i] = 48 + temp;
		else
			arr[i] = 55 + temp;
		c = c / 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (i);
}