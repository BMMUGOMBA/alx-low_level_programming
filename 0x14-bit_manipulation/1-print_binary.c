#include "main.h"

/**
 * print_binary - A function that prints a binary number without % or /
 * @n: The number to be printed
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int i;

	if (n == 0)
	{
		_putchar('0');
	}
	for (i = 1 << 31; i > 0; i = i / 2)
	{
		(n & i) ? _putchar('1') : _putchar('0');
	}
}
