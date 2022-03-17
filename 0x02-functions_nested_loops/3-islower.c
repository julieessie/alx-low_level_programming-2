#include "main.h"

/**
  * _islower - checks if alphabet is lower
  * @c: The character to be checked
  *
  * Return: 1 if lower case and 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
