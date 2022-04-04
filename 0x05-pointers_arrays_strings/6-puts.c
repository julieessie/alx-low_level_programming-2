#include "main.h"

/**
 * puts2 - prints all the characters of a string
 * @str: The string to be printed
 *
 * Return: The string
 */
void puts2(char *str)
{
	if (*str == '\0')
		_putchar(str +1);
	_putchar(*str);
	_putchar('\n');
}

int main(void)
{
	char *str;

	str = "0123456789";
	puts2(str);
	return (0);
}
