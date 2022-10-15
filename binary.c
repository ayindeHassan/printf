#include "main.h"

/**
 * binary - prints decimal in binary
 * @bin: pointer to bin
 * @int_in: input number
 * @isneg: if input number is negative
 * @limit: size of the binary
 * Return: number of chars printed.
 */
char *binary(char *bin, long int int_in, int isneg, int limit)
{
	int i;

	for (i = 0; i < limit; i++)
		bin[i] = '0';
	bin[limit] = '\0';
	for (i = limit - 1; int_in > 1; i--)
	{
		if (int_in == 2)
			bin[i] = '0';
		else
			bin[i] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		bin[i] = '1';
	if (isneg)
	{
		for (i = 0; bin[i]; i++)
			if (bin[i] == '0')
				bin[i] = '1';
			else
				bin[i] = '0';
	}
	return (bin);
}