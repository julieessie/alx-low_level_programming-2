#include "main.h"

/**
  * print_sign - Prints the sign of the char c
  * @n: Character to be checked
  *
  * Return: Always 0, 1, -1 (success)
  */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(0);
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
