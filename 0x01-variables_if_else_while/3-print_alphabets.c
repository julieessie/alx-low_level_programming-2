#include <stdio.h>

/**
  * main - The function prints lower case and upper case letters
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char upper;
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
