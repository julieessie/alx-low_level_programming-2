#include "main.h"

/**
  * main - Prints the alphabets
  *
  * Return: Always 0 (Success)
  */
void print_alphabet(void)
{
	char z;
	
	for (z = 'a'; z <= 'z'; z++)
	{
		_putchar(z);
	}
	_putchar('\n');
	return (0);
}
