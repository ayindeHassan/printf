#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
* pointer - print a
*@args:argument
*
* Return: length
*/
int print_pointer(va_list args)
{
	void *p;
	char *n = "(nil)";
	long int cast;
	int a, i;

	p = va_arg(args, void*);
	if (p == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(n[i]);
		return (i);
	}
	cast = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	a = hex_pointer(cast);
	return (a + 2);
}

/**
 * hex_pointer - print a
 *@c:unsigned long int to convert in hexa
 *
 * Return: length
 */
int hex_pointer(unsigned long int c)
{
	int  i, j, temp;
	int arr[100];

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