#include <stdio.h>

/**
  * print_to_98 - Prints from any number to 98
  * @n: The first character
  */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d", n);
		printf("\n");
	}
	else if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d", n);
		printf("\n");
	}
}

