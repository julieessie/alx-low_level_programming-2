#include "main.h"

/**
  * times_table - Prints the 9 times table
  *
  * Return: Always 0 (Success)
  */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		_putchar(' ');
		for (y = 1; y <= 9; y++)
		{
			int num = x*y;
			_putchar(num + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
