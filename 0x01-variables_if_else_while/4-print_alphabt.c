#include <stdio.h>

/**
  * main - The function prints all lowercase letters except q and e
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');

	return (0);
}
