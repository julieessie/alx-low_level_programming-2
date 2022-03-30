#include "main.h"

/**
 * swap_int - Swaps two integers using dereferencing
 * @a: The first parameter to be swapped
 * @b: The second parameter to be swapped
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
