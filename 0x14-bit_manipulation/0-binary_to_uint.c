#include "main.h"
#include <stdio.h>

/**
 * str_len - Finds the length of string
 *
 * @s: String of which length is to be found.
 *
 * Return: The length of the string
 */
int str_len(const char *s)
{
	int len = 0, idx;

	for (idx = 0; *(s + idx); idx++)
	{
		if (*(s + idx) == '\0')
			break;
		len++;
	}
	return (len);
}
/**
 * power - Finds power @y of @x.
 *
 * @x: Base number.
 * @y: Exponent
 *
 * Return: x raised to power y
 */
int power(int x, int y)
{
	int pow = 0;

	if (y == 0)
		return (1);
	pow = x * power(x, y - 1);

	return (pow);
}
/**
 * binary_to_uint - converts the binary number to an unsigned int
 * @b: The string to be checked
 *
 * Return: 0 if there are one or more characters in the string b or b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = str_len(b);
	unsigned int dec = 0, idx = 0;

	if (b == NULL)
		return (0);

	while (len > 0)
	{
		--len;
		if (*(b + len) != '0' && *(b + len) != '1')
			return (0);

		dec += (*(b + len) - '0') * power(2, idx);
		idx++;
	}
	return (dec);
}
