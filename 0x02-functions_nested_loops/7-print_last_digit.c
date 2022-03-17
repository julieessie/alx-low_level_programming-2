#include "main.h"

/**
  * print_last_digit - Prints the last digit
  * @x: Theinteger to be checked
  *
  * Return: The last digit
  */
int print_last_digit(int x)
{
	int num = x % 10;

	if (num < 0)
		num *= -1;
	_putchar(num + '0');

	return (num);
}
