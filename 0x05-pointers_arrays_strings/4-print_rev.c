#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: the character argument passed
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * print_rev - prints a string in reverse
 * @s: The pointer to character
 *
 * return: the value
 */
void print_rev(char *s)
{
	int l;
	int i;

	l = _strlen(s);
	i = l;

	while (i > 0)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');
}
