#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts decimal to binary
 * @n: the integer to be converted to binary
 *
 * Return: the binary value
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
