#include "main.h"

/**
 * print_binary - Convert a decimal number to binary
 * @n: Number to convert
 *
 * Return: Number of binary digits printed
 */
int print_binary(unsigned int n)
{
	int counter = 0;
	int binary[64];
	int i = 0;
	int j;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (1);
	}

	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar('0' + binary[j]);
		counter++;
	}

	_putchar('\n');

	return (counter);
}

