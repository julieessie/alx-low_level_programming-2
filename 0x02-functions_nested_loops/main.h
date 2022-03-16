#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	char z;
	for (z = 'a'; z <= 'z'; z++)
	{
		_putchar(z);
	}
}
#endif
