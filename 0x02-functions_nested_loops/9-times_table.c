#include "main.h"

/**
  * times_table - Prints the 9 times table
  *
  * Return: Always 0 (Success)
  */
void times_table(void)
{
	int x, y, z, num;

	for (y = 1; y <= 10; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (z = 0; z <= 9; z++)
				num = z * y;
			_putchar(num + '0');
			if (x == 9)
				continue;
			else
				_putchar(',');
			_putchar(' ');
			if (x == 0)
				_putchar(' ');
			else
				continue;
		}
	_putchar('\n');
	}
}
int main(void)
{
	times_table(void);
	return (0);
}
