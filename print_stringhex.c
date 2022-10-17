#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 *stringhexa - Entry point
 *@args: argument tipo char * we want to change
 *Return: no return
 */
int print_stringHex(va_list args)
{
	int i;
	int len;
	char *s;
	char n[] = "(null)";
	unsigned int h;

	len = 0;
	s = va_arg(args, char *);
	if (s == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(n[i]);
		return (6);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			h = s[i];
			if (h < 16)
			{
				_putchar ('0');
				len++;

			}
			len = len + print_specialHex(h);
		}
		else
		{

			_putchar(s[i]);
			len++;

		}
	}
	return (len);
}