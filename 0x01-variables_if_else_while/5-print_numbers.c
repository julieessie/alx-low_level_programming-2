#include <stdio.h>

/**
  * main - The function prints single digit numbers from 0-10
  *
  * Return: Alwalys 0 (Success)
  */
int main(void)
{
	char x;

	for (x = 0; x < 10 ; x++)
		printf("%d", x);
	printf("\n");

	return (0);
}
