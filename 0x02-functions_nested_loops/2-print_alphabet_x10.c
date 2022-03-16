#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabet ten times
  *
  * Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	char x;
	int y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
