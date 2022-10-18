#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * print_revString - Entry point
 * @args: pointer the string we want to reverse and print
 *
 * Return: no return
 */
int print_revString(va_list args)
{
	int count_fun = 0, i = 0;
	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		count_fun += _putchar(s[i]);
		i--;
	}
	count_fun--;
	return (count_fun);
}
