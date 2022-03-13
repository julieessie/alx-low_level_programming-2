#include <stdio.h>

/**
  * main - The function prints 0-10 using putchar
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char var;

	for (var = 0; var < 10; var++)
		putchar(var + '0');
	putchar('\n');

	return (0);
}
