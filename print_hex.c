#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_hex - print an octal number
 *@args:unsigned integer input
 *
 * Return: no return
 */

int print_hex(va_list args)
{
	int decimal;
    int i;
	int arr[100];

    while(decimal > 0)
    {
        int remainder = decimal % 16;

        if(remainder < 10)
            arr[i] = '0' + remainder;
        else
            arr[i] = 'A' + (remainder - 10)
        
        decimal = decimal / 16;
        i++;
    }
    return (0);
}