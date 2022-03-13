#include <stdio.h>

/**
  * main - The main function prints the numbers 0-15 in hexadecimal
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');
	for (y = 'a'; y < 'g'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
