#include <stdio.h>

/**
  * main - The function prints single digit numbers with commas
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
		if (x == 9)
			continue;
		else
			putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
