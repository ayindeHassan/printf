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
	int i, j;
	char *s;
	char n[] = "(null)";


	s = va_arg(args, char *);
	i = 0;
	if (s == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(n[i]);
		return (6);
	}
	j = 0;
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar (s[i]);
	return (j);
}