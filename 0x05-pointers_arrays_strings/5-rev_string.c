#include "main.h"
#include <stdio.h>

/**
 * rev_string - Function to reverse the string
 * @s: pointer to store the string
 *
 * Return: the reversed string
 */
void rev_string(char *s)
{
	int l = 0, i = 0;
	char z;

	while (s[i++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		z = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = z;
	}
}
